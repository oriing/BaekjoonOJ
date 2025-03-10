#include <stdio.h>
#define MAX 5010
#define MOD 1000000007
 
long long int dp[MAX]={};

int main(){
	int n;
	int t;
	
	dp[0]=1;
	
	for(int i=2;i<MAX;i+=2){
		for(int j=2;j<=i;j+=2){
			dp[i] += dp[j-2] * dp[i-j];
			dp[i] %= MOD;
		}
	}
	
	scanf("%d", &n);
	while(n--){
		scanf("%d", &t);
		printf("%lld\n", dp[t]);
	}
	
	return 0;
} 
