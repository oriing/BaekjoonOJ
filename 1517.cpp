#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

long long int ans=0;
int d[500100];
int t[500100]={};

void msort(int l, int r){
	int m=(l+r)/2;
	
	if(l>=r) return;
	
	msort(l, m);
	msort(m+1, r);
	
	int p=l, q=m+1;
	
	for(int i=l;i<=r;i++){
		if(p<=m && (d[p]<=d[q] || q>r)){
			t[i]=d[p++];
		}
		else{
			ans+=q-i;
			t[i]=d[q++];
		}
	}
	
	for(int i=l;i<=r;i++) d[i]=t[i];
}

int main(){
	int n;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", d+i);
	}
	msort(0, n-1);
	
	printf("%lld", ans);
}
