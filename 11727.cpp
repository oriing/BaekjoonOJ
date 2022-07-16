#include <stdio.h>

long long int dp[1001][3];
int main(){
	int n;
	scanf("%d",  &n);
	dp[1][1]=1;
	dp[1][2]=0;
	dp[2][1]=1;
	dp[2][2]=2;
	for(int i=3;i<=n;i++){
		dp[i][1]=(dp[i-1][1]+dp[i-1][2])%10007;
		dp[i][2]=(dp[i-2][1]+dp[i-2][2])*2%10007;
	}
	printf("%lld", (dp[n][1]+dp[n][2])%10007);
	
	return 0;
} 
