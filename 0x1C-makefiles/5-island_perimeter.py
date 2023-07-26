#!/usr/bin/python3
"""
Module contains a function that returns the perimeter
of the island described in grid.
"""


def island_perimeter(grid):
    """
    function that returns the perimeter of
    island described by grid.
    """

    height = len(grid)
    width = len(grid[0])
    edges = 0
    size = 0

    for m in range(height):
        for n in range(width):
            if grid[m][n] == 1:
                size += 1
            if (n > 0 and grid[m][n - 1] == 1):
                edges += 1
            if (n > 0 and grid[m - 1][n] == 1):
                edges += 1
    return size * 4 - edges * 2
