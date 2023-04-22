#include <stdio.h>

int main(){
	int n, dp[]={1, 2, 3, 4, 5, 4, 3, 2, 1};
	scanf("%d", &n); n--;
	printf("%d", dp[n%8]);
	
	return 0;
}
