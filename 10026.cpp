#include <stdio.h>
#include <string.h>

char d[110][110]={};
int check[110][110]={}, n;

void res(int x, int y, char c){
	int dp[4][2]={0, 1, 1, 0, 0, -1, -1, 0};
	if(check[x][y]==1 && d[x][y]!=c) return;
	check[x][y]=1;
	for(int i=0;i<4;i++){
		if(check[x+dp[i][0]][y+dp[i][1]]==0 && d[x+dp[i][0]][y+dp[i][1]]==c){
			res(x+dp[i][0], y+dp[i][1], c);
		}
	}
}

int main(){
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%s", &d[i][1]);
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(check[i][j]==0){
				res(i, j, d[i][j]);
				ans++;
			}
		}
	}
	memset(check, 0, sizeof(check));
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) if(d[i][j]=='R') d[i][j]='G';
	
	int ans2=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(check[i][j]==0){
				res(i, j, d[i][j]);
				ans2++;
			}
		}
	}
	
	printf("%d %d", ans, ans2);
	
	return 0;
}
