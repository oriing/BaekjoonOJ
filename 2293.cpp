#include <stdio.h>
int dp[2][10010]={};
int main(){
	int n, k, t;
	scanf("%d %d", &n, &k);
	dp[0][0]=1;
	for(int i=1;i<=n;i++){
		scanf("%d", &t);
		for(int j=0;j<=k;j++){
			dp[1][j] = dp[0][j];
			if(j-t>=0) dp[1][j] += dp[1][j-t];
		}
		for(int j=0;j<=k;j++) dp[0][j] = dp[1][j];
	}
	printf("%d", dp[0][k]);
	
	return 0;
}
