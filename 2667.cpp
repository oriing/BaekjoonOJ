#include <stdio.h>
#include <algorithm>
using namespace std;

char d[50][50]={};
int n, visit[50][50]={};
int dp[4][2]={0, 1, 1, 0, 0, -1, -1, 0};
int ad[1000]={};
int find(int x, int y){
	if(visit[x][y]==1) return 0;
	visit[x][y]=1;
	int ret=1;
	for(int i=0;i<4;i++){
		if(d[x+dp[i][0]][y+dp[i][1]] == 1 && visit[x+dp[i][0]][y+dp[i][1]] == 0){
			ret+=find(x+dp[i][0], y+dp[i][1]);
		}
	}
	return ret;
}

int main(){
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%s", &d[i][1]);
		for(int j=1;j<=n;j++) d[i][j]-='0';
	}
	int ans=0;
	for(int x=1;x<=n;x++){
		for(int y=1;y<=n;y++){
			if(d[x][y]==1 && visit[x][y]==0){
				ad[ans++]=find(x, y);
			}
		}
	}
	printf("%d\n", ans);
	
	sort(ad, ad+ans);
	for(int i=0;i<ans;i++) printf("%d\n", ad[i]);
	return 0;
}
