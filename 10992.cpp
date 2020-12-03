#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n-1;i++) printf(" ");
	printf("*\n");
	for(int i=2;i<=n-1;i++){
		for(int j=0;j<n-i;j++){
			printf(" ");
		}
		printf("*");
		for(int j=0;j<i*2-3;j++){
			printf(" ");
		}
		printf("*\n");
	}
	if(n!=1) for(int i=0;i<n*2-1;i++){
		printf("*");
	}
	printf("\n");
	
	return 0;
}
