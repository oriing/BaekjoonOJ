#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vector<vi> mp;
vector<vi> ans;
stack<int> finds;
vector<int> idlist;
vector<int> finished;
int id;

int dfs(int x){
	idlist[x] = ++id;
	finds.push(x);
	
	int minResult = idlist[x];
	for(int i : mp[x]){
		if(!idlist[i]) minResult = min(minResult, dfs(i));
		else if(!finished[i]) minResult = min(minResult, idlist[i]);
	}
	
	if(minResult == idlist[x]){
		vi temp;
		
		while(1){
			int tx = finds.top();
			finds.pop();
			temp.push_back(tx);
			finished[tx] = 1;
//			idlist[tx] = idlist[x];
			if(tx == x) break;
		}
		
		sort(temp.begin(), temp.end());
		ans.push_back(temp);
	}
	
	return minResult;
}

bool cmp(vi &a, vi &b){
	return a[0] < b[0];
}

int main(){
	int n, e, t1, t2;
	scanf("%d %d", &n, &e);
	for(int i=0;i<=n;i++){
		mp.push_back(vector<int>());
		finished.push_back(0);
		idlist.push_back(0);
	}
	
	for(int i=0;i<e;i++){
		scanf("%d %d", &t1, &t2);
		mp[t1].push_back(t2);
	}
	for(int i=1;i<=n;i++) sort(mp[i].begin(), mp[i].end());
	
	for(int i=1;i<=n;i++){
		if(!idlist[i]) dfs(i);
	}
	
	printf("%d\n", ans.size());
	sort(ans.begin(), ans.end());
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			printf("%d ", ans[i][j]);
		}
		printf("-1\n");
	}
	
	return 0;
}
