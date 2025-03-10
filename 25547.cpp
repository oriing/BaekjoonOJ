#include <stdio.h>

int main(){
	int a, b, k=0;
	scanf("%d %d", &a, &b);
	
	if(b % a){
		printf("0");
		return 0;
	}
	
	int t = a; k=2;
	for(int i=2;;i++){
		do{
			t += a;
			if(t >= b){
				printf("%d", k);
				return 0;
			}
		}while(b % t);
		k++;
	}
	
	return 0;
}
