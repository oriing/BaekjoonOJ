#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

class Edge{
public:
	int x, y, v;
	Edge(): x(0), y(0), v(0) {}
	Edge(int x, int y, int v): x(x), y(y), v(v) {}
	
	bool operator<(const Edge &other) const {
		return v > other.v;
	}
};

int V, E, check=0;
priority_queue<Edge> pq;
vector<Edge> map[1010];
vector<Edge> ans;
bool visited[1010] = {};

int main(){
	int tx, ty, tv;
	scanf("%d %d", &V, &E);
	
	for(int i=0;i<E;i++){
		scanf("%d %d %d", &tx, &ty, &tv);
		map[tx].push_back(Edge(tx, ty, tv));
		map[ty].push_back(Edge(ty, tx, tv));
	}
	
	visited[1] = true;
	for(Edge &next: map[1]){
		pq.push(next);
	}
	
	while(check<V && !pq.empty()){
		Edge now = pq.top(); pq.pop();
		if(visited[now.y]) continue;
		
		ans.push_back(now);
		visited[now.y] = true;
		
		for(Edge &next: map[now.y]){
			if(!visited[next.y]) pq.push(next);
		}
		
		check++;
	}
	
	long long int sm = 0;
	for(int i=0;i<ans.size();i++){
		sm += ans[i].v;
	}
	printf("%lld", sm);
	
	return 0;
}
