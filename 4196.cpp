#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vector<vi> mp;
stack<int> finds;
vector<int> idlist;
vector<int> finished;
int id;
vector<int> maptogo;

vector<vector<int*> > realmp;
vector<int> cnts;

void global_reset(){
	mp = vector<vi>();
	finds = stack<int>();
	idlist = vector<int>();
	finished = vector<int>();
	id = 0;
	realmp = vector<vector<int*> >();
	cnts = vector<int>();
	maptogo = vector<int>();
}

int dfs(int x){
	idlist[x] = ++id;
	finds.push(x);
	
	int minResult = idlist[x];
	for(int i : mp[x]){
		if(!idlist[i]) minResult = min(minResult, dfs(i));
		else if(!finished[i]) minResult = min(minResult, idlist[i]);
	}
	
	if(minResult == idlist[x]){
		set<int*> temp;
		while(1){
			int tx = finds.top();
			finds.pop();
			finished[tx] = 1;
			maptogo[tx] = realmp.size();
			
			for(int i : mp[tx]){
				temp.insert(&(maptogo[i]));
			}
			
			if(tx == x) break;
		}
		
		vector<int*> temp2;
		
		for(int* i : temp){
			temp2.push_back(i);
		}
		realmp.push_back(temp2);
		cnts.push_back(0);
	}
	
	return minResult;
}

void gos(){
	int n, e, t1, t2;
	scanf("%d %d", &n, &e);
	global_reset();
	for(int i=0;i<=n;i++){
		mp.push_back(vector<int>());
		finished.push_back(0);
		idlist.push_back(0);
		maptogo.push_back(0);
	}
	
	for(int i=0;i<e;i++){
		scanf("%d %d", &t1, &t2);
		mp[t1].push_back(t2);
	}
	for(int i=1;i<=n;i++) sort(mp[i].begin(), mp[i].end());
	
	for(int i=1;i<=n;i++){
		if(!idlist[i]) dfs(i);
	}
	
	for(int i=0;i<realmp.size();i++){
		for(int* next : realmp[i]){
			if(i!=(*next)) cnts[*next]++;
		}
	}
	
	int ans=0;
	
	for(int i=0;i<cnts.size();i++){
		if(cnts[i] == 0) ans++;
	}
	
	printf("%d\n", ans);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) gos();
	
	return 0;
}
