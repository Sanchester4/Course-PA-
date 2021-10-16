#include "functions.h"

void printGrid(int** grid, int n)
{
    fprintf(f, "\n===The generated matrix===\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("%d \t ", grid[i][j]);
            fprintf(f, " %d ", grid[i][j]);
            if (j == n-1)
            {
                fprintf(f, "\n\n");
            }
        }
        printf("\n");
    }
}







