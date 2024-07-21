#include <stdio.h>
#include <string.h>
int dp[1010][1010]={};

void gos(){
	int stp=2;
	
	dp[1][1] = dp[2][1] = dp[3][1] = 1;
	for(int i=1;i<=1000;i++){
		for(int j=stp;j<=i;j++){
			for(int k=1; k<=3 && k<=i; k++){
				dp[i][j] += dp[i-k][j-1];
				dp[i][j] %= 1000000009;
			}
			if(dp[i][j] == 0) stp = j+1;
		}
	}
	
}

int main(){
	int n, m, t;
	scanf("%d", &t);
	gos();
	for(int i=0;i<t;i++){
		scanf("%d %d", &n, &m);
		printf("%d\n", dp[n][m]);
	}
	
	return 0;
}
