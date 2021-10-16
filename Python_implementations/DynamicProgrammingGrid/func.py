def DynPM(cost, n): 
    dp = [[0 for i in range(n)] for j in range(n)] 
    dp[0][0] = cost[0][0] 
    for i in range(1, n):
        dp[i][0] = dp[i-1][0] + cost[i][0]
    for j in range(1, n):
        dp[0][j] = dp[0][j-1] + cost[0][j]
    for i in range(1, n):
        for j in range(1, n):
            dp[i][j] = min(dp[i-1][j],dp[i][j-1])+cost[i][j]
    for z in dp:
        print(z)
    print("\n===The minimum cost value:", dp[n-1][n-1],"===", "\n")
    return dp[n-1][n-1]
