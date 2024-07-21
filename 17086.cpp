#include <stdio.h>
#include <queue>
const int dp[8][2] = {0, 1, 1, 0, 0, -1, -1, 0, 1, 1, -1, -1, 1, -1, -1, 1};
int n, m;
int map[60][60] = {};

class Data{
public:
	int x, y, bef;
	Data(int x, int y, int bef): x(x), y(y), bef(bef) {}
	Data(): x(0), y(0), bef(0) {}
};
std::queue<Data> q;

void push(Data d){
	for(int i=0;i<8;i++){
		int nx = d.x+dp[i][0];
		int ny = d.y+dp[i][1];
		
		if(map[nx][ny] > d.bef+1){
			q.push(Data(nx, ny, d.bef+1));
			map[nx][ny] = d.bef+1;
		}
	}
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d", &map[i][j]);
			if(map[i][j] == 0) map[i][j] = 100000000;
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(map[i][j] == 1){
				push(Data(i, j, map[i][j]));
				while(!q.empty()){
					push(q.front());
					q.pop();
				}
			}
		}		
	}
	int mx = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(map[i][j] > mx) mx = map[i][j];
		}
	}
	printf("%d", mx-1);
	
	return 0;
}
