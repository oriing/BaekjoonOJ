#include <stdio.h>
#include <memory.h>

int n, d[110][110]={};
int checker[110][110]={}, tx, ty;
const int dp[4][2]={1, 0, 0, 1, -1, 0, 0, -1};

void dfs(int x, int y, int pt){
	checker[x][y]=1;
//	printf("%d %d %d\n", x, y, pt);
	for(int i=0;i<4;i++){
		tx = x+dp[i][0];
		ty = y+dp[i][1];
		if(d[tx][ty] >= pt && (!checker[tx][ty])){
			dfs(tx, ty, pt);
		}
	}
}

int mxc(int pt){
	int cnt=0;
	
	memset(checker, 0, sizeof(checker));
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(d[i][j] >= pt && (!checker[i][j])){
				cnt++;
				dfs(i, j, pt);
			}
		}
	}
	
	return cnt;
}

int main(){
	int cnt=0;
	
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d", &d[i][j]);
		}
	}
	
	for(int i=1;i<=100;i++){
		int t = mxc(i);
		if(cnt<t) cnt=t;
	}
	
	printf("%d", cnt);
	
	return 0;
}
