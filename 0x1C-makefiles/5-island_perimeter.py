#!/usr/bin/python3
"""module for porblem solving """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""

    area = 0
    count = 0
    """grid length and width doesnt exced 100"""
    if len(grid) == 100 or (i for i in grid) == 100:
        return 0
    for i in range(len(grid)):
        for m in range(len(grid[i])):
            if grid[i][m] == 1:
                count += 1
        area += count * 4 - ((count - 1) * 2)
        if i != 0:
            area - count * 2
        count = 0

    return area


grid =[
       [1, 1, 0, 0, 0, 1],
       [1, 1, 0, 0, 0, 1],
       [1, 1, 0, 1, 1, 1],
       [0, 1, 1, 1, 0, 0],
       [0, 0, 1, 1, 0, 0]]

print(island_perimeter(grid))
