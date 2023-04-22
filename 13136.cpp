#include <stdio.h>

int main(){
	long long int a, b, n;
	scanf("%lld %lld %lld", &a, &b, &n);
	printf("%lld", ((a-1)/n+1) * ((b-1)/n+1));
	return 0;
}
