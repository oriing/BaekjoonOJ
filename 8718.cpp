#include <stdio.h>

int main(){
	int k, x;
	scanf("%d %d", &x, &k);
	
	x*=100;
	if(k*700<=x) printf("%d", k*7000);
	else if(k*350<=x) printf("%d", k*3500);
	else if(k*175<=x) printf("%d", k*1750);
	else printf("0");
	
	return 0;
}
