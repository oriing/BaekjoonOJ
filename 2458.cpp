#include <bits/stdc++.h>
using namespace std;

vector<int> mp[510];
vector<int> mpr[510];
int visited[510], vcount;

void dfsup(int now){
	for(int i=0;i<mp[now].size();i++){
		if(visited[mp[now][i]]==0){
			vcount++;
			visited[mp[now][i]]++;
			dfsup(mp[now][i]);
		}
	}
}
void dfsdown(int now){
	for(int i=0;i<mpr[now].size();i++){
		if(visited[mpr[now][i]]==0){
			vcount++;
			visited[mpr[now][i]]++;
			dfsdown(mpr[now][i]);
		}
	}
}

int main(){
	int n, m, t1, t2;
	
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		scanf("%d %d", &t1, &t2);
		mp[t1].push_back(t2);
		mpr[t2].push_back(t1);
	}
	int ans=0;
	
	for(int i=1;i<=n;i++){
		memset(visited, 0, sizeof(visited));
		vcount=1;
		visited[i] = 1;
		dfsup(i);
		dfsdown(i);
		if(vcount == n){
			ans++;
		}
	}
	
	printf("%d", ans);
	
	return 0;
}
