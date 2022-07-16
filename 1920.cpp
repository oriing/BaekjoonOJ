#include <stdio.h>
#include <algorithm>
int n, m;
long long int a[100001];

int find(long long int x, int l, int r){
	int m=(l+r)/2;
	if(x==a[m]){
		return 1;
	}
	else if(l>=r){
		return 0;
	}
	if(a[m]<x){
		return find(x, m+1, r);
	} else {
		return find(x, l, m-1);
	}
}

int main(){
	long long int temp[100001];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%lld", a+i);
	}
	scanf("%d", &m);
	std::sort(a, a+n);
	
	for(int i=0;i<m;i++){
		scanf("%lld", &temp[i]);
	}
	for(int i=0;i<m;i++){
		printf("%d\n", find(temp[i], 0, n-1));
	}
	return 0;
}
