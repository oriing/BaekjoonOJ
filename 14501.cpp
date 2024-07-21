#include <stdio.h>

int max(int a, int b){
	return a>b?a:b;
}
int main(){
	int dp[30]={};
	int n, t, p;
	
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d %d", &t, &p);
		dp[i]=max(dp[i-1], dp[i]);
		dp[i+t-1]=max(dp[i+t-1], dp[i-1]+p);
	}
	printf("%d", dp[n]);
	
	return 0;
} 
