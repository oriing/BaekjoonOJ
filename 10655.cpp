#include <stdio.h>

int abs(int a){
	return a>0?a:-a;
}
int len(int x, int y, int a, int b){
	return abs(x-a) + abs(y-b);
}
int min(int a, int b){
	return a<b?a:b;
}

int px[100010], py[100010];
int dp[100010][2]={};
int main(){
	int n;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", px+i, py+i);
	}
	dp[0][1] = 100000000;
	dp[1][1] = 100000000;
	for(int i=1;i<n;i++){
		dp[i][0] = dp[i-1][0] + len(px[i-1], py[i-1], px[i], py[i]);
		if(i!=1) dp[i][1] = min(dp[i-2][0] + len(px[i-2], py[i-2], px[i], py[i]), dp[i-1][1] + len(px[i-1], py[i-1], px[i], py[i]));
	}
	n--;
	printf("%d", dp[n][1]>dp[n][0] ? dp[n][0] : dp[n][1]);
	
	return 0;
}
