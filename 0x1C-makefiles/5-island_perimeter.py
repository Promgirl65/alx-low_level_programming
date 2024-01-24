#!/usr/bin/python3
"""This module calculates Island perimeter in grid"""
def num_water_neighbors(grid, i, j):
    """To calculate num of water neighbours"""
    num = 0

    if i <= 0 or not grid[i - 1][j]:
        num += 1
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1
    return num

def island_perimeter(grid):
    """To calculate Island perimeter."""
    ip = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                ip += num_water_neighbors(grid, i, j)

    return ip
