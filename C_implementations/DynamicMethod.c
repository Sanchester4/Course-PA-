#include "functions.h"

void Dynamic_method(int** grid, int n)
{
    fprintf(f, "\n\n===The Dynamic Programming Method===\n\n");
    int dp[n+1][n+1];
    dp[0][0] = grid[0][0];
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = dp[i-1][0] + grid[i][0];
    }
    for (int j = 1; j < n; j++)
    {
        dp[0][j] = dp[0][j-1] + grid[0][j];
    }
    for (int i = 1; i <n; i++)\
    {
        for (int j = 1; j < n; j++)
        {
            dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + grid[i][j];
        }
    }
    printf ("\n=====Based on Dynamic Programming=====\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("%d \t ", dp[i][j]);
            fprintf(f, " %d ", dp[i][j], "a");
            if (j == n-1)
            {
                fprintf(f, "\n\n", "a");
            }
        }
        printf("\n");
    }
    printf("\nMinim value of Path is: %d \n\n",dp[n-1][n-1]);
    fprintf(f, "\nMinim value of Path is: %d \n\n",dp[n-1][n-1]);
}

int min(int a, int b)
{
    if (a<=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
