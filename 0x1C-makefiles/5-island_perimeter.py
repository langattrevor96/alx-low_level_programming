#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.
    Args:
    -grid: A rectangular grid of integers representing the island
    Returns:
    -int: the perimeter of the island
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in rang(width):
            if grid[i][j] == 1:

            size += 1
            if (j > 0 and grid[i][j - 1] == 1):
                edges += 1
            if (i > 0and grid[i - 1][j] == 1):
                edges += 1
    return size * 4 - edges * 2
