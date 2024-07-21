#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	int d[100100]={};
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++) scanf("%d", d+i);
	sort(d, d+n);
	
	int a, b; int *l, *r;
	for(int i=0;i<m;i++){
		scanf("%d %d", &a, &b);
		l = lower_bound(d, d+n, a);
		r = lower_bound(d, d+n, b);
		printf("%d\n", ((int)(r-l))+(*r==b));
	}
	
	return 0;
}
