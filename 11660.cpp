#include <stdio.h>

int d[1100][1100]={}, n, m;
long long int s[1100][1100]={};

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d", &d[i][j]);
			s[i][j]=d[i][j]+s[i-1][j]+s[i][j-1]-s[i-1][j-1];
//			printf("%d ", s[i][j]);
		}
//		printf("\n");
	}
	
	for(int i=0;i<m;i++){
		int x1, x2, y1, y2;
		scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
		printf("%lld\n", s[y2][x2]-s[y2][x1-1]-s[y1-1][x2]+s[y1-1][x1-1]);
	}
	
	return 0;
}
