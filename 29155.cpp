#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

typedef pair<int,int> pii;

bool cmp(pii a, pii b){
	if(a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}

int main(){
	int n, t1, t2, vcheck[6], vcount[6]={};
	vector<pii> v;
	
	scanf("%d", &n);
	for(int i=1;i<=5;i++) scanf("%d", vcheck+i);
	for(int i=0;i<n;i++){
		scanf("%d %d", &t1, &t2);
		v.push_back(make_pair(t1, t2));
	}
	
	sort(v.begin(), v.end(), cmp);
	
	int ans = v[0].second;
	vcount[v[0].first]++;
	
	for(int i=1;i<n;i++){
		if(vcount[v[i].first] >= vcheck[v[i].first]) continue;
		if(v[i].first == v[i-1].first){
			ans += v[i].second;
			ans += v[i].second - v[i-1].second;
		}
		else{
			ans += v[i].second;
			ans += 60;
		}
		vcount[v[i].first]++;
	}
	printf("%d", ans);
	
	return 0;
}
