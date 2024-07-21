#include <stdio.h>
#include <math.h>

long long int n;
long long int ans;
int sqrn;
int main(){
	scanf("%lld", &n);
	ans = n;
	if(n==1){
		printf("1");
		return 0;
	}
	sqrn = sqrt(n);
	
	int i=1;
	while(sqrn>=i){
		i++;
		if(n%i) continue;
		
		while(n%i==0) n/=i;
		
		ans = ans / i * (i-1);
	}
	
	printf("%lld", n==1 ? ans : ans/n*(n-1));
	
	return 0;
} 
