#include <bits/stdc++.h>

int main(){
	int n, m;
	int map[110][110]={};
	int a, b, c;
	for(int i=0;i<110;i++) for(int j=0;j<110;j++) map[i][j] = 1000000000;
	
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a][b]=std::min(map[a][b], c);
	}
	for(int i=1;i<=n;i++) map[i][i] = 0;
	
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				map[i][j] = std::min(map[i][j], map[i][k]+map[k][j]);
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ", map[i][j]>=1000000000 ? 0 : map[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
