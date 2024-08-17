#include <stdio.h>
#include <stdlib.h>

int dp[8][2]={0, 1, 1, 0, 0, -1, -1, 0, 1, 1, -1, 1, -1, -1, 1, -1};

void dfs(int x, int y, int d[55][55], int v[55][55]){
	v[x][y] = 1;
	for(int i=0;i<8;i++){
		int tx = x+dp[i][0], ty = y+dp[i][1];
		if(d[tx][ty]==1 && v[tx][ty]==0){
			dfs(tx, ty, d, v);
		}
	}
}

void gos(){
	int d[55][55]={};
	int v[55][55]={};
	int n, m, ans=0;
	scanf("%d %d", &n, &m);
	if(n==0 && m==0) exit(0);
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			scanf("%d", &d[i][j]);
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(d[i][j] == 1 && v[i][j] == 0){
				dfs(i, j, d, v);
				ans++;
			}
		}
	}
	printf("%d\n", ans);
}

int main(){
	while(1) gos();
}
