#include <stdio.h>
#include <memory.h>
#include <queue>
using namespace std;

struct Pos{
	int x;
	int y;
	bool pop;
	int len;
	
	Pos(int x, int y, int p, int l): x(x), y(y), pop(p), len(l){}
	Pos(int x, int y): x(x), y(y){
		pop = false;
		len = 1;
	}
	
	Pos nextpos(int dx, int dy){
		return Pos(x+dx, y+dy, pop, len+1);
	}
	Pos nextpos(int dx, int dy, int p){
		return Pos(x+dx, y+dy, p, len+1);
	}
};

const int dp[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
char map[1010][1010];
int vtrue[1010][1010]={};
int vfalse[1010][1010]={};
int n, m;

int main(){
	scanf("%d %d", &n, &m);
	memset(map, -1, sizeof(map));
	for(int i=1;i<=n;i++){
		scanf("%s", map[i]+1);
		map[i][m+1] = -1;
	}
	
	queue<Pos> q;
	q.push(Pos(1, 1));
	vfalse[1][1] = 1;
	
	while(!q.empty()){
		Pos t = q.front(); q.pop();
		
		if(t.x == n && t.y == m){
			printf("%d", t.len);
			return 0;
		}
		
		if(t.pop){
			for(int i=0;i<4;i++){
				if(map[t.x+dp[i][0]][t.y+dp[i][1]] == '0'){
					if(vtrue[t.x+dp[i][0]][t.y+dp[i][1]] == 0){
						q.push(t.nextpos(dp[i][0], dp[i][1]));
						vtrue[t.x+dp[i][0]][t.y+dp[i][1]] = 1;
					}
				}
			}
		}
		else{
			for(int i=0;i<4;i++){
				if(map[t.x+dp[i][0]][t.y+dp[i][1]] == '1'){
					if(vtrue[t.x+dp[i][0]][t.y+dp[i][1]] == 0){
						q.push(t.nextpos(dp[i][0], dp[i][1], true));
						vtrue[t.x+dp[i][0]][t.y+dp[i][1]] = 1;
					}
				}
				if(map[t.x+dp[i][0]][t.y+dp[i][1]] == '0'){
					if(vfalse[t.x+dp[i][0]][t.y+dp[i][1]] == 0){
						q.push(t.nextpos(dp[i][0], dp[i][1]));
						vfalse[t.x+dp[i][0]][t.y+dp[i][1]] = 1;
					}
				}
			}
		}
	}
	printf("-1");
	
	return 0;
}
