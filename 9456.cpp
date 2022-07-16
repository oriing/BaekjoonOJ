#include <stdio.h>
int max(int a, int b){
	return a>b?a:b;
}
void gos(){
	int n;
	int d[4][110000]={};
	int dp[4][110000]={};
	scanf("%d", &n);
	for(int k=1;k<=2;k++)for(int i=1;i<=n;i++){
		scanf("%d", &d[k][i]);
		dp[k][i]=d[k][i];
	}
	
	for(int i=2;i<=n;i++){
		dp[1][i]=max(dp[2][i-1], max(dp[2][i-2], dp[1][i-2]))+d[1][i];
		dp[2][i]=max(dp[1][i-1], max(dp[2][i-2], dp[1][i-2]))+d[2][i];
	}
	printf("%d\n", max(max(dp[2][n-1], dp[1][n-1]), max(dp[2][n], dp[1][n])));
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++) gos();
	
	return 0;
}
