#include <stdio.h>

int min(int a, int b){
	a=a<0?-a:a;
	b=b<0?-b:b;
	return a>b?b:a;
}

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", min(a+b-c-d, a+d-b-c));
}
