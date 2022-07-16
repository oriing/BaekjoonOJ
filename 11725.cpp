#include <stdio.h>
#include <vector>

using namespace std;

vector<int> v[100100];
int n;
int visited[100010]={}, par[100010]={};

void dfs(int x){
	for(int i=0;i<v[x].size();i++){
		if(visited[v[x][i]]==0){
			par[v[x][i]]=x;
			visited[v[x][i]]=1;
			dfs(v[x][i]);
		}
	}
}

int main(){
	scanf("%d", &n);
	for(int i=0;i<n-1;i++){
		int a, b;
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	dfs(1);
	
	for(int i=2;i<=n;i++) printf("%d\n", par[i]);
	
	return 0;
}
