#include <stdio.h>
long long int dp[100][200]={};
int k, n;

int main(){
	long long int ans = 0;
	scanf("%d %d", &k, &n);
	dp[1][100]=1;
	if(k==0){
		printf("0");
		return 0;
	}
	for(int i=2;i<=n+1;i++){
		for(int j=-i+1;j<i&&j<k;j++){
			dp[i][j+100]=dp[i-1][j+101]+dp[i-1][j+99];
//			printf("%d ", dp[i][j+100]);
		}
//		printf("\n");
	}
	
	for(int i=-n;i<k&&i<=n;i++) ans += dp[n+1][i+100];
	
	printf("%lld", ans);
	
	return 0;
}
