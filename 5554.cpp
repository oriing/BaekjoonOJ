#include <stdio.h>

int main(){
	int a, b, c, d, e;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	e=a+b+c+d;
	printf("%d\n%d", e/60, e%60);
	
	return 0;
}
