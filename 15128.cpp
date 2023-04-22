#include <stdio.h>

int main(){
	long long int a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	printf("%d", (a*c%(b*d*2) == 0)?1:0);
}
