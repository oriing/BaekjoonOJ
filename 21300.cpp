#include <stdio.h>

int main(){
	int n=0;
	for(int i=0;i<6;i++){
		int t;
		scanf("%d", &t);
		n+=t*5;
	}
	printf("%d", n);
}
