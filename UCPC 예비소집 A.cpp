#include <stdio.h>
int n;
int k;
int ans[30]={}, ret[30]={};

int max(int a, int b){
	return a>b?a:b;
}

int gos(int npa, int np, int ks){
	int mx=0;
	if(npa >= n || np >= n) return 0;
	mx = gos(npa+1, np+1, ks) + (ans[npa] == ret[np] ? 1 : 0);
	if(ks<k){
		mx = max(mx, gos(npa, np+1, ks+1));
		mx = max(mx, gos(npa+1, np, ks+1));
	}
//	printf("%d %d %d %d\n", npa, np, ks, mx);
	return mx;
}

int main(){
	
	scanf("%d %d", &n, &k);
	
	for(int i=0;i<n;i++){
		scanf("%d", &ans[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d", &ret[i]);
	}
	
	printf("%d", gos(0, 0, 0));
	
	return 0;
}
