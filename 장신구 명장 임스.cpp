#include <stdio.h>
#include <algorithm>
#define max(a, b) (a>b?a:b)
using namespace std;

typedef pair<int,int> pii;

int main(){
	int n, p, t[1100], dp[220]={};
	
	scanf("%d %d", &p, &n);
	p=200-p;
	for(int i=0;i<n;i++){
		scanf("%d", t+i);
	}
	for(int j=0;j<n;j++){
		for(int i=p;i>=t[j];i--){
			if(dp[i]<dp[i-t[j]]+1){
				dp[i] = dp[i-t[j]]+1;
			}
		}
	}
	int mx=0, pos=0;
	for(int i=0;i<=p;i++){
		if(mx<dp[i]){
			pos=i;
			mx=dp[i];
		}
	}
	if(pos!=p){
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=t[i];
		}
		if(sum!=pos){
			mx++;
		}
	}
	printf("%d", mx);
}
