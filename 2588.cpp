#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int ai[3];
	ai[0]=b%10;
	ai[1]=(b%100)/10;
	ai[2]=b/100;
	printf("%d\n%d\n%d\n%d", ai[0]*a, ai[1]*a, ai[2]*a, a*b);
    return 0;
}
