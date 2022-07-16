#include <stdio.h>

int dp[110]={};
int move[110]={};

int main(){
	int n, m;
	dp[0]=0; dp[1]=0;
	for(int i=2;i<=7;i++) dp[i]=1;
	scanf("%d %d", &n, &m);
	for(int i=8;i<110;i++) dp[i]=10000;
	for(int i=0;i<n;i++){
		int tx, ty;
		scanf("%d %d", &tx, &ty);
		move[tx]=ty-tx;
		if(tx<=7) dp[tx]=10000;
	}
	for(int i=0;i<m;i++){
		int tx, ty;
		scanf("%d %d", &tx, &ty);
		move[tx]=ty-tx;
		if(tx<=7) dp[tx]=10000;
	}
	dp[1+move[1]]=0;
	for(int i=2;i<=7;i++) dp[i+move[i]]=1;
	
	for(int k=0;k<110;k++)
		for(int i=1;i<=100;i++){
			for(int j=-6;j<=0;j++){
				if(i+j<=0||i+j>=101) continue;
				if(dp[i+move[i]] > dp[i+j]+1){
					dp[i+move[i]] = dp[i+j]+1;
				}
			}
		}
	
	if(dp[100]==10000) printf("%d", dp[100+move[100]]);
	else printf("%d", dp[100]);
	
//	for(int i=0;i<110;i++) printf("%d: %d\n", i, dp[i]);
	
	return 0;
}
