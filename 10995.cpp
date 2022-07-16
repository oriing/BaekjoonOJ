#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		if(i%2){
			for(int j=1;j<=n;j++) printf("* ");
		}
		else {
			for(int j=1;j<=n;j++) printf(" *");
		}
		printf("\n");
	}
	
	return 0;
}
