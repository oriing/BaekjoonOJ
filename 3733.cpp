#include <stdio.h>

int main(){
	int n, x;
	while(~scanf("%d %d", &n, &x))
		printf("%d\n", x/(n+1));
}
