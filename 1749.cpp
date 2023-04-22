#include <stdio.h>
int max(int a, int b){
	return a>b?a:b;
}
int main(){
	int d[202][202]={};
	int mx=-2147483647;
	int n, m, t;
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d", &t);
			d[i][j]=d[i-1][j]+d[i][j-1]-d[i-1][j-1]+t;
			mx=max(mx, t);
		}
	}
	
	for(int x1=1;x1<=n;x1++)
		for(int y1=1;y1<=m;y1++)
			for(int x2=x1;x2<=n;x2++)
				for(int y2=y1;y2<=m;y2++){
					int np=d[x2][y2] - d[x1-1][y2] - d[x2][y1-1] + d[x1-1][y1-1];
					mx=max(mx, np);
				}
	
	printf("%d", mx);
	
	return 0;
}
