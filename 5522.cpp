#include <stdio.h>

int main(){
	int sum=0;
	for(int i=0;i<5;i++){
		int k;
		scanf("%d", &k);
		sum+=k;
	}
	printf("%d", sum);
	
	return 0;
}
