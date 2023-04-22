#include <stdio.h>
#include <algorithm>
using namespace std;

typedef pair<int,int> pii;

bool cmp(pii a, pii b){
	return a.first>b.first;
}

int abs(int a){
	return a>0?a:-a;
}

int n, d[55], dp[55], s;
pii dsort[55];

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d", d+i);
	scanf("%d", &s);
	int sortedPoint=-1;
	while(s>0){
		for(int i=0;i<n;i++) dsort[i].first=d[i];
		for(int i=0;i<n;i++) dsort[i].second=i;
		sort(dsort, dsort+n, cmp);
		
		int checkPNT=1;
		for(int i=0;i<n;i++) if(dsort[i].first!=d[i]) checkPNT=0;
		if(checkPNT) break;
//		
//		for(int i=0;i<n;i++){
//			dp[dsort[i].second]=abs(i-dsort[i].second);
//		}
		
		for(int i=sortedPoint+1;i<n;i++){
			dp[i]=abs(sortedPoint+1-i);
		}
		
		int mx=-1;
		for(int i=sortedPoint+1;i<n;i++){
			if(s>=dp[i]){
				if(mx==-1){
					mx=i;
					continue;
				}
				if(d[mx]<d[i]){
					mx=i;
				}
				if(d[mx]==d[i] && dp[mx]>d[i]){
					mx=i;
				}
			}
		}
		
		s-=dp[mx];
		for(int i=mx-1;i>sortedPoint;i--){
			int t=d[i];
			d[i]=d[i+1];
			d[i+1]=t;
		}
		sortedPoint++;
	}
	
	for(int i=0;i<n;i++){
		printf("%d ", d[i]);
	}
	
	return 0;
}
