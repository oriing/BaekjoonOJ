#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;

priority_queue<int, vector<int>, greater<int> > v;
vector<pair<int,int> > query;
int main(){
	int n, s, t;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &s, &t);
		query.push_back(make_pair(s, t));
	}
	sort(query.begin(), query.end());
	for(int i=0;i<n;i++){
		s = query[i].first; t = query[i].second;
		if(v.empty() || v.top() > s){
			v.push(t);
		}
		else{
			v.pop();
			v.push(t);
		}
	}
	
	printf("%d", v.size());
	return 0;
}
