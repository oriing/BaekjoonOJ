#include <stdio.h>

int main(){
	int n, m, d[101][101]={};
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++){ for(int j=0;j<m;j++)
		scanf("%d", &d[i][j]);
	}
	for(int i=0;i<n;i++){ for(int j=0;j<m;j++){
		int t;
		scanf("%d", &t);
		d[i][j]+=t;
	}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
