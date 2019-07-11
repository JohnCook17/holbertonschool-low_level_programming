#!/usr/bin/python3


def island_perimeter(grid):
    """Finds the perimeter of an island '1' in a sea '0'
    """
    land = 0
    gridrow = 0
    touching = 0
    for _ in grid:
        location = 0
        for n in grid[gridrow]:
            if n == 1:
                land += 1
                if grid[gridrow][location + 1] == 1:
                    touching += 1
                if grid[gridrow][location -1] == 1:
                    touching += 1
                if grid[gridrow - 1][location] == 1:
                    touching += 1
                if grid[gridrow + 1][location] == 1:
                    touching += 1
            location += 1
        gridrow += 1
        print(land)
        print(touching)
    return land * 4 - touching