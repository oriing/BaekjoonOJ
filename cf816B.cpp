#include <stdio.h>
#include <memory.h>

void find(){
	long long int n, k, b, s;
	scanf("%lld %lld %lld %lld", &n, &k, &b, &s);
	
	if(s/k < b){
		printf("-1\n");
		return;
	}
	if(s/k == b){
		for(int i=1;i<n;i++) printf("0 ");
		printf("%lld\n", s);
		return;
	}
	
	int x=0;
	while(s/k > b){
		x++;
		s-= k-1;
		
		if(x >= n){
			printf("-1\n");
			return;
		} 
	}
	
	for(int i=1;i<n-x;i++) printf("0 ");
	for(int i=0;i<x;i++) printf("%lld ", k-1);
	printf("%lld\n", s);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--) find();
}
