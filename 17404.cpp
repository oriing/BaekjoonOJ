#include <stdio.h>

int d[1010][3]={};
int dp[1010][3]={};
int n;

int max(int a, int b){
	return a<b?a:b;
}

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d", &d[i][0], &d[i][1], &d[i][2]);
	}
	int ans = 1000000000;
	
	for(int s=0;s<3;s++){
		dp[0][s] = d[0][s];
		dp[0][(s+1)%3] = 1000000000;
		dp[0][(s+2)%3] = 1000000000;
		
		for(int i=1;i<n;i++){
			dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + d[i][0];
			dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + d[i][1];
			dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + d[i][2];
		}
		
		for(int i=0;i<3;i++){
			if(i==s) continue;
			ans = max(ans, dp[n-1][i]);
		}
	}
	
	printf("%d", ans);
	
	
	return 0;
}
