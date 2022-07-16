#include <stdio.h>

int d[9]={};

void gos(int n, int m, int c){
	
	for(int i=1;i<=n;i++){
		d[c]=i;
		if(m==c){
			for(int i=1;i<=m;i++) printf("%d ", d[i]);
			printf("\n");
		}
		else{
			gos(n, m, c+1);
		}
	}
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	gos(n, m, 1);
}
