#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	for(int i=n;i>=1;i--){
		for(int j=n;j>=i;j--) printf("*");
		printf("\n");
	}
	for(int i=1;i<n;i++){
		for(int j=n;j>i;j--) printf("*");
		printf("\n");
	}
	
	return 0;
}
