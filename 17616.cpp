#include <stdio.h>
#include <vector>

using namespace std;

vector<int> v[100010];
vector<int> vr[100010];
vector<int> visited;

int dfs(int x){
	int cnt = 0;
	for(int i=0;i<v[x].size();i++){
		if(visited[v[x][i]] == 0){
			visited[v[x][i]] = 1;
			cnt += dfs(v[x][i]);
		}
	}
	return cnt + 1;
}
int dfsr(int x){
	int cnt = 0;
	for(int i=0;i<vr[x].size();i++){
		if(visited[vr[x][i]] == 0){
			visited[vr[x][i]] = 1;
			cnt += dfsr(vr[x][i]);
		}
	}
	return cnt + 1;
}

int main(){
	int n, m, x, t1, t2;
	scanf("%d %d %d", &n, &m, &x);
	for(int i=0;i<m;i++){
		scanf("%d %d", &t1, &t2);
		vr[t1].push_back(t2);
		v[t2].push_back(t1);
	}
	
	visited.resize(n+1, 0);
	visited[x] = 1;
	int up = dfs(x) - 1;
	visited.resize(n+1, 0);
	visited[x] = 1;
	int down = dfsr(x) - 1;
	
	printf("%d %d", up+1, n-down);
	return 0;
}
