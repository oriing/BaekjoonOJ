#include <stdio.h>

int map[1001][1001]={};
int visited[1001]={};
int n, m, x, y;
int point=0;

void dfs(int v){
	if(visited[v]) return;
	visited[v]=1;
	
	for(int i=1;i<=n;i++){
		if(visited[i]==0&&map[v][i]) dfs(i);
	}
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		scanf("%d %d", &x, &y);
		map[x][y]=map[y][x]=1;
	}
	
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			point++;
			dfs(i);
		}
	}
	printf("%d", point);
	
	return 0;
}
