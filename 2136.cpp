#include <stdio.h>
#include <algorithm>
#define change(x) (ans<(x)?ans=(x):0)

using namespace std;

typedef pair<int,int> pii;

bool cmp(pii a, pii b){
	return abs(a.first)<abs(b.first);
}

int main(){
	int n, L; pii d[100100]; int l=0, r=0;
	scanf("%d %d", &n, &L);
	for(int i=0;i<n;i++){
		scanf("%d", &d[i].first);
		if(d[i].first>0){
			r++;
		}
		else{
			l++;
		}
		d[i].second=i+1;
	}
	
	sort(d, d+n, cmp);
	int ans=0, ansp;
	
	if(l){
		int lmax;
		for(int i=n-1;i>=0;i--){
			if(d[i].first<0){
				lmax=d[i].first;
				break;
			}
		}
		
		if(change(-lmax)) ansp=d[l-1].second;
	}
	
	if(r){
		int rmax;
		for(int i=0;i<n;i++){
			if(d[i].first>0){
				rmax=d[i].first;
				break;
			}
		}
		if(change(L-rmax)) ansp=d[l].second;
	}
	printf("%d %d", ansp, ans);
	
	return 0;
}
