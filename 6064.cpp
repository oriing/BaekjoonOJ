#include <stdio.h>

void gos(){
	int n, m, x, y;
	scanf("%d %d %d %d", &n, &m, &x, &y);
	int i=y-1;
	while(1){
		if(i>n*m){
			printf("-1\n");
			return;
		}
		if(i%n+1==x){
			printf("%d\n", i+1);
			return;
		}
		i+=m;
	}
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++) gos();
	return 0;
}
