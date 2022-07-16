#include <stdio.h>

int main(){
	int n;
	int dp[1000001]={0, 1, 1, 2};
	scanf("%d", &n);
	for(int i=4;i<=n;i++){
		dp[i]=(dp[i-1]+dp[i-2])%1000000007;
	}
	printf("%d", dp[n]);
	
	return 0;
}
