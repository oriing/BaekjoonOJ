#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

	int n, m, s, a, b, t=1;
	vector<int> v[100100];
	int ans[100100]={};

void dfs(int k){
	ans[k]=t++;
	for(int i=0;i<v[k].size();i++){
		if(!ans[v[k][i]]) dfs(v[k][i]);
	}
}

int main(){
	scanf("%d %d %d", &n, &m, &s);
	for(int i=0;i<m;i++){
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1;i<=n;i++){
		sort(v[i].begin(), v[i].end());
	}
	dfs(s);
	for(int i=1;i<=n;i++){
		printf("%d\n", ans[i]);
	}
}
