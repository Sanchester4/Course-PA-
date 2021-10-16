print("The length of matrix nXn : ", end = "")
n = int(input())

print("The range between 0 and : ", end = "")
v = int(input())

print("\n\n===The given Matrix=\n")

j = i = n

import random

mat = [[random.randint(0, v+1) for i in range(n)] for j in range(n)]

for j in mat:
    print(j)

print("\n===The Backtracking Method===\n")

path = [0 for i in range(n + n)]

import backfunc
backfunc.BackDM(mat, 0, 0, n, path, 0)

var = backfunc.a
print("===The best cost value is :" , var , "===\n") 

