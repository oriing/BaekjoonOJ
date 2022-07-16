#include <stdio.h>
#define min(A, B) ((A)<(B)?(A):(B))
int main(){
	int n;
	scanf("%d", &n);
	int dp[50001]={};
	dp[1]=1;
	
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+1;
		for(int j=1;j*j<=i;j++){
			dp[i]=min(dp[i], dp[i-j*j]+1);
		}
	}
	printf("%d", dp[n]);
	return 0;
}
