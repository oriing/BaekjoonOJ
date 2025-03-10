#include <stdio.h>
#include <string.h>
#include <vector>

const int data[6][4][4] = {
	{{}},
	{{0}, {1}, {2}, {3}},
	{{0, 2}, {1, 3}},
	{{0, 1}, {1, 2}, {2, 3}, {3, 0}},
	{{0, 1, 2}, {1, 2, 3}, {2, 3, 0}, {3, 0, 1}},
	{{0, 1, 2, 3}}
};
const int maxlen[6] = {0, 4, 2, 4, 4, 1};
const int maxlencam[6] = {0, 1, 2, 2, 3, 4};
const int dp[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

int map[11][11]={};
struct Camera{
	int x, y, mode;
	Camera(): x(0), y(0), mode(0) {}
	Camera(int x, int y, int mode): x(x), y(y), mode(mode) {}
};
std::vector<Camera> camera;

void check(int x, int y, int mode, int pos){
	for(int i=0;i<maxlencam[mode];i++){
		int dx = dp[data[mode][pos][i]][0];
		int dy = dp[data[mode][pos][i]][1];
		int nx = x, ny = y;
		
		while(1){
			nx += dx; ny += dy;
			if(map[nx][ny] == 6) break;
			if(map[nx][ny] != 0) continue;
			map[nx][ny] = -1;
		}
	}
}

int minans = 2147483647;
int m, n;
void dfs(int idx){
	if(idx == camera.size()){
		int tans = 0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(map[i][j] == 0) tans++;
			}
		}
		if(minans > tans) minans = tans;
		return;
	}
	
	int temp[11][11]={};
	
	Camera now = camera[idx];
	for(int i=0;i<maxlen[now.mode];i++){
		memcpy(temp, map, sizeof(map));
		
		check(now.x, now.y, now.mode, i);
		dfs(idx+1);
		
		memcpy(map, temp, sizeof(temp));
	}
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d", &map[i][j]);
			if(map[i][j] != 6 && map[i][j] != 0){
				camera.push_back(Camera(i, j, map[i][j]));
			}
		}
	}
	for(int i=0;i<=m+1;i++) map[0][i] = map[n+1][i] = 6;
	for(int i=0;i<=n+1;i++) map[i][0] = map[i][m+1] = 6;
	
	dfs(0);
	printf("%d", minans);
	
	return 0;
}
