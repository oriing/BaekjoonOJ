#include <stdio.h>

int min(int a, int b){
	return a>b?b:a;
}

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", min(a+d, b+c));
}
