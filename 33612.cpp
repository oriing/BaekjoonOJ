#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	int x=2024,b=8;
	while(--a){
		b+=7;
		if(b>=13){
			x+=1;
			b-=12;
		}
	}
	printf("%d %d", x, b);
}
