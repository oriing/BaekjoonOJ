#include <stdio.h>

void gos(){
	int w, k;
	scanf("%d %d", &w,&k);
	printf("%d\n", w*k/2);
}

int main(){
	int z;
	scanf("%d", &z);
	for(int i=0;i<z;i++) gos();
}
