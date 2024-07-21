#include <stdio.h>
#include <algorithm>
int abs(int x){
	return x>0?x:-x;
}
void swap(int &a, int &b){
	int t = a;
	a = b;
	b = t;
}
int n, pa, pb, d[100010];
void gos(){
	scanf("%d %d %d", &n, &pa, &pb);
	for(int i=0;i<n;i++) scanf("%d", d+i);
	if(pa>pb){
		swap(pa, pb);
	}
	std::sort(d, d+n);
	
	int p = 0, q = n-1;
	long long int sa = 0, sb = 0;
	
	while(p <= q){
		if(abs(pa-d[p]) < abs(pb-d[q])){
			sa += abs(pa-d[p++]);
		}
		else if(abs(pa-d[p]) > abs(pb-d[q])){
			sb += abs(pb-d[q--]);
		}
		else{
			if(sa>sb) sb += abs(pb-d[q--]);
			else sa += abs(pa-d[p++]);
		}
	}
	printf("%lld %lld\n", 2*(sa+sb), 2*(sa>sb?sa-sb:sb-sa));
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++) gos();
	return 0;
}
