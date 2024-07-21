#include <bits/stdc++.h>

using namespace std;

vector<int> mp[40000];
int deg[40000] = {};
priority_queue<int, vector<int>, greater<int> > q;
int n, m;

int main(){
	int t1, t2;
	
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		scanf("%d %d", &t1, &t2);
		mp[t1].push_back(t2);
		deg[t2]++;
	}
	
	for(int i=1;i<=n;i++){
		if(!deg[i]) q.push(i);
	}
	
	while(!q.empty()){
		int t = q.top(); q.pop();
		
		for(int next : mp[t]){
			if(!(--deg[next])){
				q.push(next);
			}
		}
		
		printf("%d ", t);
	}
	
	
	return 0;
}
