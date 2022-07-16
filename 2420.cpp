#include <stdio.h>

int main(){
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", a-b>0?a-b:b-a);
}
