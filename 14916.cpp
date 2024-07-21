#include <stdio.h>

int main(){
	int n, cnt=0;
	scanf("%d", &n);
	while(n % 5){
		n -= 2;
		cnt ++;
		if(n < 0){
			printf("-1");
			return 0;
		}
	}
	printf("%d", n/5+cnt);
	
	return 0;
}
