#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int k=2;
	while(n>1){
		if(n%k==0){
			printf("%d\n", k);
			n/=k;
		} else {
			k++;
		}
	}
	
	return 0;
}
