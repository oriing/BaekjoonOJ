#include <stdio.h>

int n, m;
int d[10][10]={};
int di[10][10]={};
int dp[10][10]={};

void del(int x, int y){
	dp[x][y]=3;
	int dph[4][2]={0, 1, 1, 0, -1, 0, 0, -1};
	for(int i=0;i<4;i++){
		if(x+dph[i][0]>0&&x+dph[i][0]<=n&&y+dph[i][1]>0&&y+dph[i][1]<=m&&dp[x+dph[i][0]][y+dph[i][1]]==0){
			del(x+dph[i][0], y+dph[i][1]);
		}
	}
}

int check(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j]=di[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(dp[i][j]==2){
				del(i, j);
			}
		}
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(dp[i][j]==0) cnt++;
		}
	}
	return cnt;
}

int gos(int c, int x, int y){
	if(c==4){
		return check();
	}
	if(y>m){
		y=1;x++;
	}
	if(x>n){
		return 0;
	}
	int ans=0;
	for(int i=x; i<=n;i++){
		int j=1;
		if(i==x){
			j=y;
		}
		for(;j<=m;j++){
			if(d[i][j]==0){
				di[i][j]=1;
				int temp=gos(c+1, i, j+1);
				if(temp>ans) ans=temp;
				di[i][j]=0;
			}
		}
	}
	return ans;
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d", &d[i][j]);
			di[i][j]=d[i][j];
		}
	}
	
	printf("%d", gos(1, 1, 1));
	
	return 0;
}
