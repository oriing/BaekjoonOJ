#include <stdio.h>

int map[510][510]={};
const int dp[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
int visited[510][510]={};
int n, m;

int dfs(int x, int y){
	if(x==n && y==m) return 1;
	if(visited[x][y] > 0) return visited[x][y];
	
	int xk=0, nx, ny;
	
	for(int i=0;i<4;i++){
		nx = x+dp[i][0];
		ny = y+dp[i][1];
		
		if(visited[nx][ny]==-1) continue;
		if(map[x][y] <= map[nx][ny]) continue;
		
		xk += dfs(nx, ny);
	}
	
	if(xk==0) visited[x][y]=-1;
	else visited[x][y] = xk;
	
	return xk;
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=0;i<=n+1;i++) visited[i][0]=-1;
	for(int i=0;i<=n+1;i++) visited[i][m+1]=-1;
	for(int i=0;i<=m+1;i++) visited[0][i]=-1;
	for(int i=0;i<=m+1;i++) visited[n+1][i]=-1;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d", &map[i][j]);
		}
	}
	visited[1][1] = -1;
	printf("%d", dfs(1, 1));
	
	return 0;
}
