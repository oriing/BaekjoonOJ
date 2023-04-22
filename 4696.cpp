#include <stdio.h>

int main(){
	while(1){
		double n;
		scanf("%lf", &n);
		if(n==0) break;
		printf("%.2f\n", n+n*n+n*n*n+n*n*n*n+1);
	}
	return 0;
}
