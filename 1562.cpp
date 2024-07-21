#include <stdio.h>

int dp[101][11][1 << 10]={};

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=1;i<=9;i++) dp[1][i][1<<i] = 1;
	
	for(int i=2;i<=n;i++){
		for(int j=0;j<=9;j++){
//			int stemp=0;
			for(int k=0;k<=(1<<10)-1;k++){
				if(j){
					dp[i][j][k|(1<<j)] += dp[i-1][j-1][k];
					dp[i][j][k|(1<<j)] %= 1000000000;
					dp[i][j][k|(1<<j)] += dp[i-1][j+1][k];
				}
				else
					dp[i][j][k|(1<<j)] += dp[i-1][j+1][k];
				dp[i][j][k|(1<<j)] %= 1000000000;
//				stemp += dp[i][j][k];
			}
//			printf("%d %d: %d\n", i, j, stemp);
		}
	}
	
	int sum = 0;
	for(int i=0;i<=9;i++){
		sum += dp[n][i][(1<<10)-1];
		sum %= 1000000000;
	}
	printf("%d", sum);
	
	return 0;
}
