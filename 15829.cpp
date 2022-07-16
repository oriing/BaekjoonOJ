#include <stdio.h>

int main(){
	int n;
	char a[51];
	long long int r=1;
	long long int sum=0;
	scanf("%d %s", &n, a);
	for(int i=0;i<n;i++){
		sum+=(r*(a[i]-'a'+1)) % 1234567891;
		sum%=1234567891;
		r*=31;
		r%=1234567891;
	}
	printf("%lld", sum%1234567891);
	
	return 0;
}
