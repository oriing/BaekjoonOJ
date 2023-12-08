#include <stdio.h>
#include <algorithm>
#include <utility>

using namespace std;

typedef pair<int,int> pii;
bool comp(const pii &a, const pii &b){
	return a.first < b.first;
}

int n, m, b[200100]={};
pii a[200100];
int main(){
	
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++) scanf("%d", &b[i]);
	for(int i=0;i<m;i++) scanf("%d %d", &a[i].first, &a[i].second);
	
	sort(b, b+n);
	sort(a, a+m, comp);
	
	int p=0, q=0, mx=0, nv;
	while(q<m){
		nv=2147483647;
//		printf("%d %d %d", b[p], a[q].first, b[p+1]);
		
		if(p==n-1){
			nv = min(nv, abs(b[p] - a[q].first) * a[q].second);
			if(nv > mx) mx=nv;
			q++;
//			printf(", pnt1; %d", nv);
		}
		else if(b[p] < a[q].first && a[q].first < b[p+1]){
			nv = min(nv, abs(b[p] - a[q].first) * a[q].second);
			nv = min(nv, abs(b[p+1] - a[q].first) * a[q].second);
			if(nv > mx) mx=nv;
			q++;
//			printf(", pnt2; %d", nv);
		}
		else if(b[p] > a[q].first){
			if(p==0){
				nv = min(nv, abs(b[p] - a[q].first) * a[q].second);
				if(nv > mx) mx=nv;
				q++;
			}
			else p--;
//			printf(", pnt3; %d", nv);
		}
		else if(a[q].first > b[p+1]){
			p++;
//			printf(", pnt4;", nv);
		}
//		printf("\n");
	}
	printf("%d", mx);
	
	return 0;
}
