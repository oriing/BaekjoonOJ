#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=0;i<=1000000;i++){
		if(i*5>=n) {
			printf("%d", i);
			break;
		}
	}
}
