#include <bits/stdc++.h>

using namespace std;

const int MAX_IDX = 10010;
const int INF = 2147483647;

struct UnionFind{
	int parent[MAX_IDX];
	
	UnionFind(){
		memset(parent, -1, sizeof(parent));
	}
	
	int find(int v){
		if(parent[v] == -1) return v;
		return parent[v] = find(parent[v]);
	}
	
	void join(int a, int b){
		a = find(a);
		b = find(b);
		if(a!=b){
			parent[a] = parent[b];
		}
	}
};

struct Edge{
	int start, end, weight;
	
	Edge(){
		start = end = 0;
		weight = INF;
	}
	
	bool operator<(Edge other){
		if(weight == other.weight){
			if(start == other.start){
				return end < other.end;
			}
			return start < other.start;
		}
		return weight < other.weight;
	}
};

struct Graph{
	int n;
	int nvertex;
	Edge edges[10*MAX_IDX];
	int visited[MAX_IDX];
	
	Graph(){
		n = nvertex = 0;
		memset(visited, 0, sizeof(visited));
	}
	
	void insert(int start, int end, int weight){
		edges[n].start = start;
		edges[n].end = end;
		edges[n].weight = weight;
		n++;
	}
};

Graph g;
UnionFind uf;

int main(){
	int v, E, a, b, c;
	scanf("%d %d", &v, &E);
	
	for(int i=0;i<E;i++){
		scanf("%d %d %d", &a, &b, &c);
		g.insert(a, b, c);
	}
	
	g.nvertex = v;
	
	int edge_accepted = 0;
	int uset, vset;
	Edge e;
	
	sort(g.edges, g.edges+g.n);
	
//	for(int i=0;i<E;i++) printf("%d %d %d\n", g.edges[i].start, g.edges[i].end, g.edges[i].weight);
	
	long long int ans = 0;
	
	for(int i=0; edge_accepted < v-1; i++){
		e = g.edges[i];
		
		if(g.visited[e.start] && g.visited[e.end]) continue;
		
		uset = uf.find(e.start);
		vset = uf.find(e.end);
//			printf("%d\n", e.weight);
		
		if(uset != vset){
			g.visited[e.start] = 1;
			g.visited[e.end] = 1;
			ans += e.weight;
			edge_accepted++;
			uf.join(uset, vset);
		}
		
		if(i>=g.n){
			throw out_of_range("범위초과");
		}
	}
	
	printf("%lld", ans);
	
	return 0;
}

