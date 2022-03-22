#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if(n%10) {
		printf("-1");
		return 0;
	}
	else {
		printf("%d %d %d", n/300, (n%300)/60, ((n%300)%60)/10);
	}
	
	return 0;
}
