#include <stdio.h>
#define adel(c) ((c) - 'A')

bool visit[27]={};
char map[30][30]={};
int r, c;
const int dp[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

int max(int a, int b){
	return a>b?a:b;
}

int find(int x, int y){
	visit[adel(map[x][y])] = true;
	int mx = 0;
	for(int i=0;i<4;i++){
		if(visit[adel(map[x+dp[i][0]][y+dp[i][1]])]) continue;
		if(map[x+dp[i][0]][y+dp[i][1]])
			mx = max(mx, find(x+dp[i][0], y+dp[i][1]));
	}
	visit[adel(map[x][y])] = false;
	return mx + 1;
}

int main(){
	scanf("%d %d", &r, &c);
	for(int i=1;i<=r;i++){
		scanf("%s", &map[i][1]);
	}
	
	printf("%d", find(1, 1));
	
	return 0;
}
