#include <stdio.h>
#define min(x, y) ((x)>(y)?(y):(x))

int dp[1010][3]={};
int n;
int d[1010][3];

int main(){
	
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d %d %d", &d[i][0], &d[i][1], &d[i][2]);
	}
	
	for(int i=1;i<=n;i++){
		dp[i][0] = min(dp[i-1][1]+d[i][0], dp[i-1][2]+d[i][0]);
		dp[i][1] = min(dp[i-1][0]+d[i][1], dp[i-1][2]+d[i][1]);
		dp[i][2] = min(dp[i-1][0]+d[i][2], dp[i-1][1]+d[i][2]);
	}
	
	int m=min(dp[n][0], min(dp[n][1], dp[n][2]));
	printf("%d", m);
	return 0;
}
