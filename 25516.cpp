#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a<1024){
		printf("No thanks");
		return 0;
	}
	
	a -= 1023;
	
	if((a ^ (a & b)) == 0) printf("Thanks");
	else printf("Impossible");
	
	return 0;
}
