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
vector<Edge> ans;
int root[10010] = {};

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int find(int x){
	if(root[x] < 0) return x;
	return root[x] = find(root[x]);
}

void unity(int a, int b){
	a = find(a);
	b = find(b);
	
	if(root[a] > root[b]) swap(a, b);
	if(root[a] == root[b]) root[a]--;
	root[b] = a;
}

int main(){
	int tx, ty, tv;
	scanf("%d %d", &V, &E);
	
	for(int i=1;i<=V;i++) root[i]=-1;
	
	for(int i=0;i<E;i++){
		scanf("%d %d %d", &tx, &ty, &tv);
		pq.push(Edge(tx, ty, tv));
	}
	while(check<V-1 && !pq.empty()){
		Edge now = pq.top(); pq.pop();
		if(find(now.x) == find(now.y)) continue;
		ans.push_back(now);
		unity(now.x, now.y);
		check++;
	}
	
	long long int sm = 0;
	for(int i=0;i<ans.size();i++){
		sm += ans[i].v;
	}
	printf("%lld", sm);
	
	return 0;
}
