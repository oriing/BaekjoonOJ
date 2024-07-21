#include <stdio.h>

int main(){
	int n, m, a, b, c, y;
	int d[110][110]={};
	scanf("%d %d", &n, &m);
	
	for(int _=0;_<n;_++){
		scanf("%d %d %d %d", &a, &b, &c, &y);
		for(int i=a; i<=c; i++){
			for(int j=b; j<=y; j++){
				d[i][j]++;
			}
		}
	}
	int cnt = 0;
	for(int i=1;i<=100;i++){
		for(int j=1;j<=100;j++){
			if(d[i][j] > m) cnt++;
		}
	}
	printf("%d", cnt);
	
	return 0;
}
