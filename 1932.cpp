#include <stdio.h>

int max(int a, int b){
	return a>b?a:b;
}

int main(){
	int n, dp[510][510]={};
	
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			scanf("%d", &dp[i][j]);
			dp[i][j]=max(dp[i-1][j-1], dp[i-1][j])+dp[i][j];
		}
	}
	
	int a=-1;
	for(int i=1;i<=n;i++) a=max(dp[n][i], a);
	printf("%d", a);
}
