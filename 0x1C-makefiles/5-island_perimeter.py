#!/usr/bin/python3
"""
    function to calculate perimeter of a grid
"""

def island_perimeter(grid):
    """ Return the perimeter of the island.
    The grid represents water by 0 and land by 1

    Args:
        grid: A list of list of integers that represents and island
    Returns:
        The perimeter of island described in grid
    """

    width = len(grid[0])
    height = len(grid)
    edge = 0
    counter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                counter += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return counter * 4 - edge * 2
