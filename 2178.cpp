#include <stdio.h>
#include <queue>
#include <algorithm>
#include <string.h>
#include <functional>

using namespace std;

struct data{
	int x;
	int y;
	int time=0;
	data(int _x, int _y, int _time){
		x=_x;
		y=_y;
		time=_time;
	}
};

char d[110][110]={};
int n, m, visit[110][110]={};
queue<data> q;

int dp[4][2]={1, 0, 0, 1, -1, 0, 0, -1};

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++){
		scanf("%s", &d[i][1]);
		for(int j=1;j<=m;j++) d[i][j]-='0';
	}
	data imsi(1, 1, 1);
	q.push(imsi);
	
	while(!q.empty()){
		data p=q.front();
		q.pop();
		
		if(visit[p.x][p.y] || d[p.x][p.y]==0) continue;
//		printf("%d %d %d\n", p.x, p.y, p.time);
		visit[p.x][p.y]=1;
		if(p.x==n&&p.y==m){
			printf("%d", p.time);
			break;
		}
		for(int i=0;i<4;i++){
//				printf("%d %d %d %d\n", p.x+dp[i][0], p.y+dp[i][1], d[p.x+dp[i][0]][p.y+dp[i][1]]==1, visit[p.x+dp[i][0]][p.y+dp[i][1]]);
			if(d[p.x+dp[i][0]][p.y+dp[i][1]]==1 && visit[p.x+dp[i][0]][p.y+dp[i][1]]==0){
				data imsi(p.x+dp[i][0], p.y+dp[i][1], p.time+1);
				q.push(imsi);
			}
		}
	}
	
	return 0;
}
