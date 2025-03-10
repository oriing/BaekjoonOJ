#include <stdio.h>

int dp[1000010]={};
const int a = 15746;

int main(){
	int n;
	scanf("%d", &n);
	
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=n;i++){
		dp[i] = dp[i-1] + dp[i-2];
		dp[i] %= a;
	}
	printf("%d", dp[n]);
	
	return 0;
}
