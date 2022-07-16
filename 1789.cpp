#include <stdio.h>

int main(){
	long long int s;
	scanf("%lld", &s);
	long long int n=1;
	while((n*(n+1)/2)<=s){
		n++;
	} 
	printf("%lld", n-1);
	
	return 0;
}
