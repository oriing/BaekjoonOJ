#include <stdio.h>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
	return b?gcd(b, a%b):a;
}
int main(){
	int n, ans=1, d[60];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		int t;
		scanf("%d", &t);
		d[i]=t;
		if(ans%t){
			ans*=t/gcd(ans, t);
		}
	}
	sort(d, d+n);
	if(d[n-1]==ans) ans*=d[0];
	printf("%d", ans);
	return 0;
}
