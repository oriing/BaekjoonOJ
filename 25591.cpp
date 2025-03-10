#include <stdio.h>

int main(){
	int a, b, c, d, q, r, x, y, v1, v2;
	scanf("%d %d", &v1, &v2);
	
	
	a = 100 - v1;
	b = 100 - v2;
	c = 100-(a+b);
	d = a * b;
	q = d / 100;
	r = d % 100;
	x = c + q;
	y = r;
	
	printf("%d %d %d %d %d %d\n%d %d", a, b, c, d, q, r, x, y);
	
	return 0;
}
