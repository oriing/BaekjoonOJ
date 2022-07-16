#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	for(int i=n;i>=1;i--){
		for(int j=n;j>i;j--) printf(" ");
		for(int j=0;j<i*2-1;j++) printf("*");
		printf("\n");
	}
	
	return 0;
}
