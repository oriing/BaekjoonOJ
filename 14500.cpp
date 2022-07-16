#include <stdio.h>
#include <string.h>
int d[1010][1010]={};
int dp[4][2]={0, 1, 1, 0, -1, 0, 0, -1};
int n, m;

int f4(int x, int y){
//	printf("4: %d %d\n", x, y);
	return d[x][y];
}

int f3(int x1, int y1, int x2, int y2, int x, int y){
	int max=-100000;
//	printf("3: %d %d\n", x, y);
	for(int i=0;i<4;i++){
		int imx=x+dp[i][0], imy=y+dp[i][1];
		if(imx<=0||imx>n||imy<=0||imy>m) continue;
		if(imx==x1 && imy==y1) continue;
		if(imx==x2 && imy==y2) continue;
		
		int temp=f4(imx, imy);
		if(temp>max) max=temp;
	}
	return max+d[x][y];
}

int f2(int x1, int y1, int x, int y){
	int max=-100000;
//	printf("2: %d %d\n", x, y);
	for(int i=0;i<4;i++){
		int imx=x+dp[i][0], imy=y+dp[i][1];
		if(imx<=0||imx>n||imy<=0||imy>m) continue;
		if(imx==x1 && imy==y1) continue;
		
		int temp=f3(x1, y1, x, y, imx, imy);
		if(temp>max) max=temp;
	}
	
	return max+d[x][y];
}

int find(int x, int y){
	int max=-100000;
//	printf("1: %d %d\n", x, y);
	for(int i=0;i<4;i++){
		int imx=x+dp[i][0], imy=y+dp[i][1];
		if(imx<=0||imx>n||imy<=0||imy>m) continue;
		int temp=f2(x, y, imx, imy);
		if(temp>max) max=temp;
	}
//	printf("%d\n\n", max+d[x][y]);
	return max+d[x][y];
}

int tfind(int x, int y){
	int max=-100000;
	for(int i=0;i<4;i++){
		int imx[3], imy[3];
		int check=0;
		for(int j=0;j<3;j++){
			imx[j]=x+dp[(i+j)%4][0], imy[j]=y+dp[(i+j)%4][1];
			if(imx[j]<=0||imx[j]>n||imy[j]<=0||imy[j]>m){
				check=1;
				break;
			}
		}
		if(check) continue;
		int temp=0;
		for(int j=0;j<3;j++){
			temp+=d[imx[j]][imy[j]];
		}
		if(temp>max) max=temp;
	}
	return max+d[x][y];
}

int main(){
	scanf("%d %d", &n, &m);
	memset(d, -1, sizeof(d));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d", &d[i][j]);
		}
	}
	
	int max=-100000;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int temp=find(i, j);
			if(temp>max) max=temp;
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int temp=tfind(i, j);
			if(temp>max) max=temp;
		}
	}
	
	printf("%d", max);
	
	return 0;
}
