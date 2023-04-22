#include <stdio.h>

int main(){
	int n, s=0;
	scanf("%d", &n);
	for(int i=0;i<5;i++){
		int k;
		scanf("%d", &k);
		if(n==k) s++;
	}
	printf("%d", s);
}
