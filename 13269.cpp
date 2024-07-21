#include <stdio.h>

int min(int a, int b){
	return a<b?a:b;
}

int main(){
	int d[510][510] = {};
	int col[510];
	int row[510];
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &d[i][j]);
			if(d[i][j]) d[i][j] = 10000;
		}
	}
	
	for(int i=0;i<m;i++) scanf("%d", col+i);
	for(int i=0;i<n;i++) scanf("%d", row+i);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			d[i][j] = min(row[n-i-1], d[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			d[i][j] = min(col[j], d[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		int mx = 0;
		for(int j=0;j<m;j++){
			if(mx < d[i][j]) mx = d[i][j];
		}
		if(mx != row[n-i-1]){
			printf("-1");
			return 0;
		}
	}
	
	for(int j=0;j<m;j++){
		int mx = 0;
		for(int i=0;i<n;i++){
			if(mx < d[i][j]) mx = d[i][j];
		}
		if(mx != col[j]){
			printf("-1");
			return 0;
		}
	}
	
	
	int ans = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
