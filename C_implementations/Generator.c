#include "functions.h"

void Generator(int** grid, int n, int v)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            grid[i][j] = rand() % v+1;
        }
    }
}
