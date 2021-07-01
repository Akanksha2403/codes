def func():
    n = int(input())
    sum = n*(n+1)/2
    if sum%2 != 0:
        print(0)
        return 0    
    limit = sum//2
    dp = ([0]*int(limit+1))*int(n+1)
    dp[0][0] = 1

    for i in range(1, n+1):
        for j in range(0, limit+1):
            
            if(j >= i):
                dp[i][j] += dp[i-1][j-1]
                dp[i][j] += dp[i-1][j]
    print(dp[n][limit])

func()