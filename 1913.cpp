#include <stdio.h>

int main(){
	int n, x, y, nx=1, ny=0;
	int d=1;
	int f;
	scanf("%d %d", &n, &f);
	int p=n*n;
	int dx[1001][1001]={};
	
	for(int i=n;i>0;i--){
		for(int j=0;j<i;j++){
			ny+=d;
			if(p==f){
				x=nx; y=ny;
			}
			dx[ny][nx]=p--;
		}
		for(int j=0;j<i-1;j++){
			nx+=d;
			if(p==f){
				x=nx; y=ny;
			}
			dx[ny][nx]=p--;
		}
		d*=-1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ", dx[i][j]);
		}
		printf("\n");
	}
	printf("%d %d", y, x);
}
