#include <stdio.h>
#include <memory.h>
#include <vector>

using namespace std;
struct edge{
	int start;
	int end;
	int value;
	edge(int s, int e, int v): start(s), end(e), value(v) {}
};

void gos(){
	int n, m, s, ee, v, k, now, ans[101]={};
	int dist[101];
	vector<edge> e;
	vector<int> spoint;
	
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		scanf("%d %d %d", &s, &ee, &v);
		e.push_back(edge(s, ee, v));
		e.push_back(edge(ee, s, v));
	}
	scanf("%d", &k);
	for(int x=0;x<k;x++){
		memset(dist, -1, sizeof(dist));
		scanf("%d", &now);
		dist[now]=0;
		for(int i=1;i<=n;i++){
			for(int j=0;j<e.size();j++){
				if(dist[e[j].start] == -1) continue;
				if(dist[e[j].end] == -1 || dist[e[j].end] > dist[e[j].start] + e[j].value){
					dist[e[j].end] = dist[e[j].start] + e[j].value;
				}
			}
		}
		
		for(int i=1;i<=n;i++){
			ans[i] += dist[i];
		}
	}
	
	
	int minp=1;
	for(int i=2;i<=n;i++){
		if(ans[i] < ans[minp]) minp = i;
	}
	printf("%d\n", minp);
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++) gos();
	
	return 0;
}
