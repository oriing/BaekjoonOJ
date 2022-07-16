#include <stdio.h>
#include <queue>

using namespace std;

int n, a[1001][1001]={};
int visitDFS[1001]={}, visitBFS[1001]={};
queue<int> q;

void DFS(int v){
	if(visitDFS[v]) return;
	visitDFS[v]=1;
	printf("%d ", v);
	for(int i=1;i<=n;i++){
		if(a[v][i] && !visitDFS[i]){
			DFS(i);
		}
	}
}

void BFS(int v){
	q.push(v);
	
	while(!q.empty()){
		int now=q.front(); q.pop();
		if(visitBFS[now]) continue;
		visitBFS[now]=1;
		printf("%d ", now);
		for(int i=1;i<=n;i++){
			if(a[now][i] && !visitBFS[i]){
				q.push(i);
			}
		}
	}
}

int main(){
	int m, v, x, y;
	
	scanf("%d %d %d", &n, &m, &v);
	for(int i=0;i<m;i++){
		scanf("%d %d", &x, &y);
		a[x][y]=a[y][x]=1;
	}
	
	DFS(v);
	printf("\n");
	BFS(v);
	
	return 0;
}
