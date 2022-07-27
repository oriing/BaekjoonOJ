#include <stdio.h>
#include <vector>
#include <algorithm>
#define get(x) ((le<=(x))? -2147483647: (((x)>=0) ? v[x].second: 2147483647))

using namespace std;

typedef pair<int,int> pii;

int l[250100]={}, n, q, le=0;
vector<pii> v;

int find(int left, int right, int x){
	int mid=(left+right)/2;
//	if(left>right){
//		printf("error");
//		return -1;
//	}
	if(v[mid].second==x){
		return v[mid].first;
	}
	if(get(mid)>=x && get(mid+1)<x) return v[mid].first;
	
	if(v[mid].second < x) return find(left, mid-1, x);
	return find(mid+1, right, x);
}

int main(){
	int k, px, py, ans;
	scanf("%d %d", &n, &q);
	for(int i=1;i<=n;i++){
		scanf("%d", &k);
		l[i]=k;
		if(le==0 || v[le-1].second!=k) {
			v.push_back(make_pair(i, k));
			le++;
		}
		else{
			v[le-1].first=i;
		}
	}
	
	for(int i=0;i<q;i++){
		scanf("%d %d", &px, &py);
		if(l[py]<px){
			printf("0\n");
			continue;
		}
		ans=1;
		ans+=l[py]-px;
		ans+=find(0, le-1, px)-py;
		
		printf("%d\n", ans);
	}
	
	
	return 0;
}
