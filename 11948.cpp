#include <stdio.h>
int min(int a, int b){
	return a>b?b:a;
}
int max(int a, int b){
	return a>b?a:b;
}

int main(){
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	printf("%d", (a+b+c+d-min(min(a, b), min(c, d)))+(max(e, f)));
}
