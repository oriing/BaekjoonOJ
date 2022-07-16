#include <stdio.h>

void go(){
	int c, v;
	scanf("%d %d", &c, &v);
	printf("You get %d piece(s) and your dad gets %d piece(s).\n", c/v, c%v);
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) go();
	return 0;
}
