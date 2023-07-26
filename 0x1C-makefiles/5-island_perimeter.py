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

    peri = 0
    for m in range(len(grid)):
        for n in range(len(grid[0])):
            if grid[m][n] == 1:
                peri += 4
                if m > 0 and grid[m - 1][n] == 1:
                    peri -= 2
                if n > 0 and grid[m][n - 1] == 1:
                    peri -= 2
    return peri
