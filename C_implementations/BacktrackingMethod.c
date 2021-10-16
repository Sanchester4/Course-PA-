#include "functions.h"

void Backtracking_method(int** grid, int i, int j, int n, int *path, int idx )
{
    int sum = 0  ;

    if (i == n - 1)
    {
        for (int k = j; k < n; k++)
        {

            path[idx + k - j] = grid[i][k];
        }
        for (int iterator = 0; iterator < idx + n - j; iterator++)
        {
            sum +=path[iterator];
        }
        if (sum < z)
        {
            z = sum ;
            for (int iterator = 0; iterator < idx + n - j; iterator++)
            {
                printf("%d ", path[iterator]);
                fprintf(f, " %d", path[iterator]);
            }
            printf("--The cost value =%d", sum);
            fprintf(f, "--The cost value =%d\n", sum);
            printf("\n");
            return 0 ;
        }
        return 0;
    }


    if (j == n - 1)
    {
        for (int k = i; k < n; k++)
        {

            path[idx + k - i] = grid[k][j];
        }
        for (int iterator = 0; iterator < idx + n - i; iterator++)
        {
            sum +=path[iterator];
        }
        if (sum < z)
        {
            z = sum ;
            for (int iterator = 0; iterator < idx + n - i; iterator++)
            {
                printf("%d ", path[iterator]);
                fprintf(f, " %d", path[iterator]);
            }
            printf("--The cost value =%d", sum);
            fprintf(f, "--The cost value =%d\n", sum);
            printf("\n");
            return 0 ;
        }
        return 0;
    }

    path[idx] = grid[i][j];

    Backtracking_method(grid, i+1, j, n, path, idx + 1);

    Backtracking_method(grid, i, j+1, n, path, idx + 1);
}

void print_result()
{
    printf("\n\n=====The best cost value [ %d ] =====\n", z);
    fprintf(f, "\n\n===The best cost value [%d] ===\n\n", z);
    fclose(f);
}
