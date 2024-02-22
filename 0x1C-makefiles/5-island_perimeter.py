#!/usr/bin/python3
"""
 grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
 """
          
def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""
    area = 0
    for i in range(len(grid)):
        for m in range(len(grid[i])):
            if grid[i][m] == 1:
                if grid[i-1][m] == 0:
                    area += 1
                if grid[i][m-1] == 0:
                    area += 1
                if grid[i][m+1] == 0:
                    area += 1
                if i+1 < len(grid):
                    if grid[i+1][m] == 0:
                        area += 1
                else:
                    return 0 
                    
    return area
