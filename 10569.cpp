#include <stdio.h>

void go(){
	int v, e;
	scanf("%d %d", &v, &e);
	printf("%d\n", 2-v+e);
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) go();
	return 0;
}
