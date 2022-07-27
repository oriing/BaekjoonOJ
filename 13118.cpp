#include <stdio.h>

int main(){
	int d[5], x, y, r;
	for(int i=0;i<4;i++) scanf("%d", d+i);
	scanf("%d %d %d", &x, &y, &r);
	for(int i=0;i<4;i++){
		if(d[i]==x){
			printf("%d", i+1); return 0;
		}
	}
	printf("0");
}
