#include <stdio.h>

int main(){
	int n, m, a;
	scanf("%d %d %d", &n, &m, &a);
	
	printf("%d", (int)((double)(n+1)*(m+1)/(a+1)-1));
	
	return 0;
}
