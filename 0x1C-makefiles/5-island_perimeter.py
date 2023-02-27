#!/usr/bin/python3
"""Defines an island perimter measuring function."""

def island_perimeter(grid):
    """Return the perimter of an island.
    The grid represents water by 0  and land by 1
    Args:
        grid (list): Alist of integers  representing an island.
    Returns:
        The perimter of the island defined in grid.
    """
    c = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for i, r in enumerate(grid):
    for j, n in enumerate(r):
       if n == 1:
           if i == 0 or grid[i - 1][j] != 1:
               c += 1
           if j == 0 or grid[i][j - 1] != 1:
               c += 1
           if j == width or grid[i][j + 1] != 1:
               c += 1
           if i == length or grid[i + 1][j] != 1:
               c += 1
    return c
