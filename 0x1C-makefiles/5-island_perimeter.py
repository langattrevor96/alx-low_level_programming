#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
    - grid (List[List[int]]): a rectangular grid of integers representing the island

    Returns:
    - int: the perimeter of the island

    Raises:
    - ValueError: if the grid is not rectangular or is not completely surrounded by water,
                  or if there is more than one island or there are lakes

    """
    # Check that the grid is rectangular and completely surrounded by water
    rows = len(grid)
    cols = len(grid[0])
    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                if r == 0 or c == 0 or r == rows - 1 or c == cols - 1:
                    raise ValueError("Grid is not completely surrounded by water.")
                if r > 0 and grid[r-1][c] == 0:
                    raise ValueError("Grid contains a lake.")
                if c > 0 and grid[r][c-1] == 0:
                    raise ValueError("Grid contains a lake.")
                if r < rows - 1 and grid[r+1][c] == 0:
                    raise ValueError("Grid contains a lake.")
                if c < cols - 1 and grid[r][c+1] == 0:
                    raise ValueError("Grid contains a lake.")

    # Calculate the perimeter of the island
    perimeter = 0
    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                perimeter += 4
                if r > 0 and grid[r-1][c] == 1:
                    perimeter -= 2
                if c > 0 and grid[r][c-1] == 1:
                    perimeter -= 2

    return perimeter
