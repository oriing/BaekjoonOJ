#include <stdio.h>
#define min(a, b) ((a)<(b)?(a):(b))
int main(){
	int dp[1000001]={0, 0, };
	int n;
	scanf("%d", &n);
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+1;
		if(i%2==0) dp[i]=min(dp[i], dp[i/2]+1);
		if(i%3==0) dp[i]=min(dp[i], dp[i/3]+1);
	}
	printf("%d", dp[n]);
	return 0;
}
