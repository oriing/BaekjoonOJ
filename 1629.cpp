#include <stdio.h>

long long int prod(long long int a, int b, long long int c){
	if(b==0) return 1;
	long long int ba=prod(a, b/2, c);
	ba=ba*ba%c;
	if(b%2==0){
		return ba;
	}
	return (ba*a)%c;
}

int main(){
	long long int a, c; int b;
	scanf("%lld %d %lld", &a, &b, &c);
	
	printf("%lld", prod(a, b, c));
}
