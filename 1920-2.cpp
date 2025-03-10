#include <stdio.h>
#include <algorithm>

bool binsearch(int *d, int l, int r, int t){
	int m = (l+r)/2;
	if(l>r) return false;
	if(d[m] == t) return true;
	if(d[m] <  t) return binsearch(d, m+1, r, t);
	else          return binsearch(d, l, m-1, t);
}

int main(){
	int n, d[100100], m, t;
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d", &d[i]);
	std::sort(d, d+n);
	scanf("%d", &m);
	for(int i=0;i<m;i++){
		scanf("%d", &t);
		if(binsearch(d, 0, n-1, t)){
			printf("1\n");
		}
		else{
			printf("0\n");
		}
	}
	
	return 0;
}
