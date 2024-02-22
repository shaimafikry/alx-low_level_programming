#!/usr/bin/python3
"""module for porblem solving """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""

    area = 0
    """grid length and width doesnt exced 100"""
    if len(grid) == 100 or (i for i in grid) == 100:
        return 0
    for i in range(len(grid)):
        for m in range(len(grid[i])):
            if grid[i][m] == 1:
                if i - 1 >= 0:
                    if grid[i - 1][m] == 0:
                        area += 1
                else:
                    area += 1
                if m -1 >= 0:
                    if grid[i][m - 1] == 0:
                        area += 1
                else:
                    area += 1
                if m + 1 < len(grid[i]):
                    if grid[i][m + 1] == 0:
                        area += 1
                else:
                    area += 1
                if i + 1 < len(grid):
                    if grid[i + 1][m] == 0:
                        area += 1
                else:
                    area += 1

    return area


# grid =[
#        [1, 1, 0, 0, 0, 1],
#        [1, 1, 0, 0, 0, 1],
#        [1, 1, 0, 1, 1, 1],
#        [0, 1, 1, 1, 0, 0],
#        [0, 0, 1, 1, 0, 0]]
# grid = [
#     [0, 1, 0, 0, 0, 1],
#     [1, 1, 0, 0, 0, 1],
#     [1, 1, 0, 1, 1, 1],
#     [0, 1, 1, 1, 0, 0],
#     [0, 0, 1, 1, 0, 0],
# ]
grid = [
     [0, 0, 0, 0, 0, 0],
     [0, 1, 1, 1, 0, 0],
     [0, 1, 1, 1, 0, 0],
     [0, 1, 1, 1, 0, 0]]
# grid=  [[0, 0, 0, 0, 0, 0],
#         [0, 1, 0, 0, 0, 0],
#         [0, 1, 0, 0, 0, 0],
#         [0, 1, 1, 1, 0, 0],
#         [0, 0, 0, 0, 0, 0] ]
print(island_perimeter(grid))
