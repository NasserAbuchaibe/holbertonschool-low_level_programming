#!/usr/bin/python3
""" 5- island_perimeter
"""


def island_perimeter(grid):
    """island_perimeter
    Args:
        grid (list): the date in the list is intergert
    Returns:
        [int]: perimeter
    """

    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if i == 0 or grid[i-1][j] == 0:
                    count += 1
                if i == len(grid) - 1 or grid[i+1][j] == 0:
                    count += 1
                if j == 0 or grid[i][j-1] == 0:
                    count += 1
                if j == len(grid[i]) - 1 or grid[i][j+1] == 0:
                    count += 1
    return count
