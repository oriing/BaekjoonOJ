#include <stdio.h>

int main(){
	long long int n, p=1, t=0;
	scanf("%lld", &n);
	while(1){
		if(n<=p){
			printf("%d", t+1);
			return 0;
		}
		t++;
		p+=t*6;
	}
	
	return 0;
}
