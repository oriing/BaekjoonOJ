#include <stdio.h>
#include <algorithm>

int main(){
	int a[60], b[60], n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", a+i);
	}
	for(int i=0;i<n;i++){
		scanf("%d", b+i);
	}
	
	std::sort(a, a+n);
	std::sort(b, b+n);
	long long int s=0;
	for(int i=0;i<n;i++){
		s+=a[i]*b[n-i-1];
	}
	printf("%lld", s);
}
