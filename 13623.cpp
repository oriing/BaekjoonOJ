#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a!=b && a!=c){
		printf("A");
	}
	else if(c!=b && a!=c){
		printf("C");
	}
	else if(a!=b && b!=c){
		printf("B");
	}
	else {
		printf("*");
	}
}
