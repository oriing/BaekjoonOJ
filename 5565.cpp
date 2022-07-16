#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	int n, t;
	scanf("%d", &n);
	for(int i=0;i<9;i++){
		scanf("%d", &t);
		n-=t;
	}
	printf("%d", n);
	
	return 0;
}
