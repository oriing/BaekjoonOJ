#include <stdio.h>
#define f(x, y, z) (x*x == y*y + z*z)

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && b==c) printf("2");
	else if(f(a, b, c) || f(b, a, c) || f(c, a, b)) printf("1");
	else printf("0");
	
	return 0;
}
