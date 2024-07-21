#include <stdio.h>
int n, m;
char map[1010][1010]={};
bool visit[1010][1010]={};
const int dp[4][2] = {0, -1, 1, 0, -1, 0, 0, 1};

int nx, ny;
bool dfs(int x, int y){
	if(x == n) return true;
	
	for(int i=0;i<4;i++){
		nx = x+dp[i][0];
		ny = y+dp[i][1];
		if(visit[nx][ny]) continue;
		if(map[nx][ny] == '1' || map[nx][ny]==0) continue;
		visit[nx][ny] = true;
		if(dfs(nx, ny)){
			return true;
		}
	}
	
	return false; 
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++){
		scanf("%s", &map[i][1]);
	}
	
	for(int i=1; i<=m; i++){
		if(visit[0][i]) continue;
		if(map[0][i] == '1') continue;
		visit[0][i] = true;
		if(dfs(0, i)){
			printf("YES");
			return 0;
		}
	}
	
	printf("NO");
	return 0;
}
