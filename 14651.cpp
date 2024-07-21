#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	if(n==1){
		printf("0");
		return 0;
	}
	long long int ans = 2;
	
	for(int i=2; i<n; i++){
		ans *= 3;
		ans %= 1000000009;
	}
	
	printf("%lld", ans);
	
	return 0;
}
