#!/usr/bin/python3
"""module for porblem solving """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""

    grid_count = len(grid)
    area = 0
    block = 4
    """grid length and width doesnt exced 100"""
    if grid_count > 100:
        return 0
    for i in grid:
        if len(i) > 100:
            return 0
    for i in range(grid_count):
        # to loop in one lst
        for m in range(len(grid[i])):
            if grid[i][m] == 1:
                if m < len(grid[i]) - 1:
                    if grid[i][m + 1] == 1:
                        block -= 1
                if m > 0:
                    if grid[i][m - 1] == 1:
                        block -= 1
                if i > 0:
                    if grid[i - 1][m] == 1:
                        block -= 1
                if i < grid_count - 1:
                    if grid[i + 1][m] == 1:
                        block -= 1
                area += block
            block = 4
    return area
