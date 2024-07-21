#include <stdio.h>

int n, m;
char map[610][610]={};

int dfs(int x, int y){
	int val=0;
	if(x<0 || x>=n || y<0 || y>=m) return 0;
	if(map[x][y]=='X' || map[x][y]==0) return 0;
	if(map[x][y]=='P'){
		map[x][y] = 0;
		val += dfs(x+1, y);
		val += dfs(x, y+1);
		val += dfs(x-1, y);
		val += dfs(x, y-1);
		return 1+val;
	}
	if(map[x][y]=='O'){
		map[x][y] = 0;
		val += dfs(x+1, y);
		val += dfs(x, y+1);
		val += dfs(x-1, y);
		val += dfs(x, y-1);
		return val;
	}
	return 0;
}

int main(){
	int stpx, stpy;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++){
		scanf("%s", map[i]);
		for(int j=0;j<m;j++){
			if(map[i][j] == 'I'){
				stpx=i, stpy=j;
				map[i][j]='O';
			}
		}
	}
	int res = dfs(stpx, stpy);
	if(res) printf("%d", res);
	else printf("TT");
	
	return 0;
}
