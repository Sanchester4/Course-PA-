#pragma once
#ifndef DECLARATION_VAR
#define DECLARATION_VAR

#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

FILE *f;

void Generator(int** grid, int n, int v);
void printGrid(int** grid, int n);
void Dynamic_method(int** grid, int n);
void Backtracking_method(int** grid, int i, int j,int n, int *path, int idx);
void print_result();
int static z = 100000;

#endif // DECLARATION_VAR


