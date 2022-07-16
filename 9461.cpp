#include <stdio.h>

long long int dp[102]={0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12};

void gos(){
	int n;
	scanf("%d", &n);
	printf("%lld\n", dp[n]);
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=12;i<=100;i++) dp[i]=dp[i-1]+dp[i-5];
	for(int i=0;i<t;i++) gos();
	return 0;
}
