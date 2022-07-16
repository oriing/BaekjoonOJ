#include <stdio.h>
#include <algorithm>

using namespace std;

int n, d[1000001]={}, ds[1000001]={}, dse[1000001]={};

int find(int a, int l, int r){
//	printf("%d %d %d\n", a, l, r);
	int m=(l+r)/2;
	if(a==dse[m]) return m;
	if(l>=r) return -1;
	if(a<dse[m]) return find(a, l, m-1);
	else return find(a, m+1, r);
}

int main(){
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", d+i);
		ds[i]=d[i];
	}
	
	sort(ds, ds+n);
	
	int temp=ds[0];
	dse[0]=ds[0];
	int np=1;
	for(int i=1;i<n;i++){
		if(ds[i]!=temp){
			dse[np++]=ds[i];
			temp=ds[i];
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d ", find(d[i], 0, np-1));
	}
	
	return 0;
}
