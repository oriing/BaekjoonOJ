#include <stdio.h>
#include <memory.h>

int map[17][17]={};
int dp[17][2<<16]={};
int complete, n;
const int inf = 1000000000;

int min(int a, int b){
	return a<b?a:b;
}

int dfs(int now, int visit){
	if(visit == complete){
		if(map[now][0] == 0){
			return inf;
		}
		else{
			return map[now][0];
		}
	}
	if(dp[now][visit] != -1){
		return dp[now][visit];
	}
	
	int ret = inf;
	
	for(int i=0;i<n;i++){
		if(map[now][i] == 0) continue;
		if(visit & (1 << i)) continue;
		ret = min(ret, map[now][i] + dfs(i, visit | (1<<i)));
	}
	return dp[now][visit] = ret;
}

int main(){
	scanf("%d", &n);
	complete = (1<<n)-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	memset(dp, -1, sizeof(dp));
	
	printf("%d", dfs(0, 1));
	
	return 0;
}
