#include <stdio.h>
#define max(a, b) ((a)>(b)?(a):(b))
int main(){
	int n, d[303]={}, dp[3][303]={}; //0: 2Ä­¶Ù±â, 1: 1Ä­¶Ù±â
	
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d", &d[i]);
	}
	dp[0][n]=d[n];
	dp[1][n]=-2147483648;
	dp[1][n-1]=d[n]+d[n-1];
	dp[0][n-1]=-2147483648;
	
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<2;j++)
			if(dp[0][i]<dp[j][i+2]+d[i]){
				dp[0][i]=dp[j][i+2]+d[i];
			}
		
		if(dp[1][i]<dp[0][i+1]+d[i]){
			dp[1][i]=dp[0][i+1]+d[i];
		}
//		for(int j=0;j<n;j++) printf("%d ", dp[0][j]);
//		printf("\n");
//		for(int j=0;j<n;j++) printf("%d ", dp[1][j]);
//		printf("\n");
	}
	printf("%d", max(max(dp[1][0], dp[1][1]), dp[0][0]));
	
	return 0;
}
