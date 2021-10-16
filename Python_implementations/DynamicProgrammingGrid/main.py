print("The length of matrix nXn : ", end = "")
n = int(input())
print("The range between 0 and : ", end = "")
v = int(input())
print("\n\n===The given Matrix===\n")
j = i = n
import random
cost = [[random.randint(0, v+1) for i in range(n)] for j in range(n)] 

for j in cost:
    print(j)
    
print("\n===Based on Dynamic Programming===\n" )
import func
func.DynPM(cost, n)



