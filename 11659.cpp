#include <stdio.h>
	int n, m;
	int d[1000001]={};

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++){
		int temp;
		scanf("%d", &temp);
		d[i]=d[i-1]+temp;
	}
	for(int i=0;i<m;i++){
		int x, y;
		scanf("%d %d", &x, &y);
		printf("%d\n", d[y]-d[x-1]);
	}
}
