#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
vector<pii> mp[10100];
int n;
vector<int> goFind;

int dfs(int x, int now){
	int mx=now;
	for(int i=0;i<mp[x].size();i++){
		if(!goFind[mp[x][i].first]){
			goFind[mp[x][i].first] = 1;
			mx = max(mx, dfs(mp[x][i].first, now+mp[x][i].second));
			goFind[mp[x][i].first] = 0;
		}
	}
	
	return mx;
}

int main(){
	int a, b, c;
	scanf("%d", &n);
	
	for(int i=0;i<n-1;i++){
		scanf("%d %d %d", &a, &b, &c);
		mp[a].push_back(make_pair(b, c));
		mp[b].push_back(make_pair(a, c));
	}
	
	int mx = 0;
	goFind = vector<int>(n+1);
	
	for(int i=1;i<=n;i++){
		if(mp[i].size() == 1){
			goFind[i] = 1;
			mx = max(mx, dfs(i, 0));
			goFind[i] = 0;
		}
	}
	printf("%d", mx);
	
	return 0;
}
