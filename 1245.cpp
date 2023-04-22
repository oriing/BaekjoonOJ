#include <stdio.h>

int map[110][110]={}, n, m;
int finded[110][110]={};
int bong=0;

int dp[8][2]={-1, -1, -1, 0, 0, -1, 1, -1, -1, 1, 1, 0, 0, 1, 1, 1};

int bfs(int x, int y){
	if(x<=0 || x>n || y<=0 || y>m) return 0;
	if(finded[x][y]) return 0;
	finded[x][y]=1;
	int nx, ny, che=1, temp;
	for(int i=0;i<8;i++){
		nx=x+dp[i][0];
		ny=y+dp[i][1];
		if(map[x][y] == map[nx][ny]){
			if(finded[nx][ny]) continue;
			temp=bfs(nx, ny);
			if(temp==0){
				che=0;
			}
		}
		else if(map[x][y]<map[nx][ny]){
			che=0;
		}
	}
	return che;
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(bfs(i, j)) bong++;
		}
	}
	
	printf("%d", bong);
	
	return 0;
}
