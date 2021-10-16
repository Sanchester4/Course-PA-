#include "functions.h"

int main() {
	int n, v;

	int** grid;
	printf("The length of the grid is : ");
     scanf("%d", &n);
     printf("\nThe highest number to generate the grid: ");
     scanf("%d", &v);

	FILE *fp;
	f=fopen("dataout4.txt", "w");
  /*  if ((fp = fopen("datain.txt", "r"))==NULL) {
    printf("Cannot open file.\n");
    exit(1);}
    else
    {
       fscanf(fp, "%d", &n);
       fscanf(fp, "%d", &v);
       printf("The length of the grid is : %d ", n);
       f=fopen("dataout.txt", "w");
       fprintf(f, "The length of the grid is : %d ", n);
       printf("\nThe highest number to generate the grid: %d", v);
       fprintf(f, "\nThe highest number to generate the grid: %d\n", v);

       fclose(fp);
    }*/


	grid = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++) {
		grid[i] = (int*)malloc(n * sizeof(int));
	}

	int newly[n+n];
    int *path = newly;
	Generator(grid, n, v);
	printGrid(grid, n);
    Dynamic_method(grid,n);

    printf ("=====Based on Backtracking Algoritm=====\n\n");
    fprintf(f, "\n\n===The Backtracking Programming Method===\n\n");
    Backtracking_method(grid, 0, 0, n, path,0);
    print_result();

	return 0;
}
