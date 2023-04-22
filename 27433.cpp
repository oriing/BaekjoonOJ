#include <stdio.h>

int main(){
	long long int n=1; int d;
	
	scanf("%d", &d);
	for(int i=1;i<=d;i++){
		n*=i;
	}
	printf("%lld", n);
	return 0;
}
