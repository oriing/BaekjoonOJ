#include <bits/stdc++.h>

int n; char d[5010][5010]={};
int main(){
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(d[i][j] != 0) continue;
			if(j==i){
				d[i][j] = d[i+1][j+1] = d[i+1][j] = 'R';
				continue;
			}
			if(d[i+1][j] != 0){
				d[i][j] = d[i][j+1] = d[i+1][j+1] = 'B';
				continue;
			}
		
			d[i][j] = d[i+1][j+1] = d[i+1][j] = 'R';
		}
	}
	for(int i=1;i<=n;i++){
		printf("%s\n", &d[i][1]);
	}
	
	return 0;
}
