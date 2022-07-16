#include <stdio.h>

int d[27]={};
int r, c;
char a[25][25]={};
int dp[4][2]={0, 1, 1, 0, 0, -1, -1, 0};

int gos(int c, int x, int y){
	int check=0, ans=0;
	for(int i=0;i<4;i++){
		if(d[x+dp[i][0]][y+dp[i][1]]&&x+dp[j][0]>0&&x+dp[i][0]<=r&&y+dp[i][1]>0&&y+dp[i][1]<=c){
			if(d[x+dp[i][0]][y+dp[i][1]]+dp[i][1]]-'A'){
				check=1;
				int temp=gos(c+1, x, y+1);
				if(temp>ans) temp=ans;
			}
		}
	}
	return ans;
}

int main(){
	scanf("%d %d", &r, &c);
	
	for(int i=1;i<=r;i++){
		scanf("%s", &a[i][1]);
	}
	
	d[a[1][1]-'A']=1;
	printf("%d", gos(1, 1, 1));
	
	return 0;
}
