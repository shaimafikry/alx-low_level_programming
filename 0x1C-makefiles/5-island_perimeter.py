#!/usr/bin/python3
"""module for porblem solving """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""

    grid_count = len(grid)
    area = 0
    flag = 0
    edge = 0
    side = 0
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
                if i == 0 or i == grid_count - 1:
                    flag = 1  # to mark first piece of land
                if flag == 1:
                    edge += 3
                    if m < (len(grid[i]) - 1) and grid[i][m + 1] == 1:
                        edge -= 2
                else:
                    side += 2
                    if m < (len(grid[i]) - 1) and grid[i][m + 1] == 1:
                        side -= 1
        flag = 0
        area += edge + side
        edge = 0
        side = 0
        # print("count after fist list", area)
    return area


# grid = [[1, 1, 0, 1, 0, 0],
#         [0, 1, 0, 1, 0, 0],
#         [0, 1, 0, 1, 0, 0]
#         ]
# print(island_perimeter(grid))
