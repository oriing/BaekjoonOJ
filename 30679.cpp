#include <stdio.h>
#include <vector>

const int dp[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
int map[110][110]={}, nextx, nexty, N, M;
std::vector<int> ans;

void find(int ps){
	bool visit[110][110][4] = {};
	int see = 0;
	int x = 1, y = ps;
	for(;;){
		if(visit[x][y][see]){
			ans.push_back(ps);
			return;
		}
		visit[x][y][see] = true;
		
		nextx = x + dp[see][1] * map[y][x];
		nexty = y + dp[see][0] * map[y][x];
		if(0 < nextx && nextx <= M && 0 < nexty && nexty <= N){
			x = nextx;
			y = nexty;
			see++;
			if(see>=4) see%=4;
		}
		else{
			return;
		}
	}
}

int main(){
	scanf("%d %d", &N, &M);
	for(int i=1; i<=N; i++){
		for(int j=1;j<=M;j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	for(int i=1;i<=N;i++){
		find(i);
	}
	
	printf("%d\n", ans.size());
	for(int i=0;i<ans.size();i++){
		printf("%d ", ans[i]);
	}
	
	return 0;
}
