#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<=n;i+=3){
		for(int j=0;j<=n;j+=5){
			if(i+j==n){
				printf("%d", i/3+j/5);
				return 0;
			}
		}
	}
	printf("-1");
	return 0;
}
