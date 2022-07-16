#include <stdio.h>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
	if(a.second==b.second){
		return a.first<b.first;
	} else return a.second<b.second;
}

int main(){
	int n;
	pair<int, int> d[100001];
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &d[i].first, &d[i].second);
	}
	
	sort(d, d+n, comp);
	
//	for(int i=0;i<n;i++){
//		printf("%d %d\n", d[i].first, d[i].second);
//	}
	
	int ans=0, now=0;
	
	for(int i=0;i<n;i++){
		if(now<=d[i].first){
			ans++;
			now=d[i].second;
		}
	}
	printf("%d", ans);
	
	return 0;
}
