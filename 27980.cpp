#include <stdio.h>

int dp[5010][5010]={};
int n, m;

int get(int i, int j){
	if(0 <= i && i <= m && 0 <= j && j <= n)
		return dp[i][j];
	return 0;
}
int mx(int a, int b){
	return a>b?a:b;
}

int main(){
	char a[5010], b[5010];
	scanf("%d %d %s %s", &n, &m, a, b);
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			dp[i][j] = (a[j]==b[i]) + mx(get(i-1, j-1), get(i-1, j+1));
		}
	}
	
	int mx=0;
	for(int i=0;i<n;i++){
		if(mx < dp[m-1][i]){
			mx = dp[m-1][i];
		}
	}
	printf("%d", mx);
	
	return 0;
}
