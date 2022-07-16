dp=[ [0]*110 for i in range(110)]

def c(n, r):
    if (dp[n][r]!=0):
        return dp[n][r]
    if (n==r or r==0):
        return 1
    dp[n][r]=(c(n-1, r-1)+c(n-1, r))
    return dp[n][r]

n, r=map(int, input().split())
print(c(n, r))
