#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	while(n>=5){
		n-=5;
		printf("V");
	}
	while(n>=1){
		n--;
		printf("I");
	}
}
