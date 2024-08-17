#include <stdio.h>

int n, k;
int a[200100], b[200100];
long long int dp[200100][2]={};

long long int min(long long int a, long long int b){
	return a<b?a:b;
}

int main(){
	scanf("%d %d", &n, &k);
	
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=n;i++){
		scanf("%d", &b[i]);
	}
	
	dp[1][0] = a[1]; dp[1][1] = b[1];
	
	for(int i=2;i<=n;i++){
		dp[i][0] = min(dp[i-1][0]+a[i], dp[i-1][1]+a[i]+k);
		dp[i][1] = min(dp[i-1][0]+b[i]+k, dp[i-1][1]+b[i]);
	}
	printf("%lld", min(dp[n][0], dp[n][1]));
	
	return 0;
} 
