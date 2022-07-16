#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	if(90<=n&&n<=100) printf("A");
	else if(80<=n&&n<=89) printf("B");
	else if(70<=n&&n<=79) printf("C");
	else if(60<=n&&n<=69) printf("D");
	else printf("F");
	
	return 0;
}
