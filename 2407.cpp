#include <stdio.h>

long long int dp[110][110]={};

long long int c(int n, int r){
	if(dp[n][r]!=0) return dp[n][r];
	if(n==r || r==0) return dp[n][r]=1;
	return dp[n][r]=c(n-1, r-1)+c(n-1, r);
}

int main(){
	int n, r;
	scanf("%d %d", &n, &r);
	
	printf("%lld", c(n, r));
}
