#include <stdio.h>

int main(){
	int n, sum=0;
	scanf("%d", &n);
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			sum+=i+j;
		}
	}
	printf("%d", sum);
}
