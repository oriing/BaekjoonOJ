#include <stdio.h>

int main(){
	int a[10]={};
	int b[10]={1, 1, 2, 2, 2, 8};
	for(int i=0;i<6;i++){
		int t;
		scanf("%d", &t);
		printf("%d ", b[i]-t);
	}
}
