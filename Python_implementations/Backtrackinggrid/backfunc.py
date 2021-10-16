a = 100000

def BackDM(mat, i, j, n, path, pi):
    global a
    summar = 0
    if (i == n - 1): 
        for k in range(j, n): 
            path[pi + k - j] = mat[i][k] 
        for l in range(pi + n - j): 
            summar = summar + path[l]
        if (summar < a):
            a = summar
            for l in range(pi + n - j):
                print(path[l], end = " ")
            print(" The cost value = ",summar , "\n")
        return

    if (j == n - 1): 

        for k in range(i, n): 
            path[pi + k - i] = mat[k][j] 
        for l in range(pi + n - i): 
            summar = summar + path[l]
        if (summar < a):
            a = summar
            for l in range(pi + n - j):
                print(path[l], end = " ")
            print(" The cost value = ",summar , "\n")        
        return

    path[pi] = mat[i][j] 

    BackDM(mat, i + 1, j, n, path, pi + 1) 

    BackDM(mat, i, j + 1,n, path, pi + 1) 
