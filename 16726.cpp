#include <stdio.h>
int max(double c, double d){
	int a=c, b=d;
	return a>b?a:b;
}
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", max((double)a*b/c, (double)a/b*c));
	return 0;
}
