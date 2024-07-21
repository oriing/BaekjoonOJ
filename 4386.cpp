#include <stdio.h>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

class Point{
public:
	double x, y;
	Point(): x(0), y(0) {}
	Point(int x, int y): x(x), y(y) {}
	
	double operator-(Point& other){
		return sqrt((x-other.x)*(x-other.x) + (y-other.y)*(y-other.y));
	}
};

class Edge{
public:
	int y;
	double v;
	Edge(): y(0), v(0) {}
	Edge(int y, double v): y(y), v(v) {}
	
	bool operator<(const Edge &other) const {
		return v > other.v;
	}
};


int V, E, check=0;
priority_queue<Edge> pq;
vector<Point> px;
vector<Edge> map[10010];
vector<Edge> ans;
bool visited[10010] = {};

int main(){
	double tx, ty;
	scanf("%d", &V);
	
	for(int i=0;i<V;i++){
		scanf("%lf %lf", &tx, &ty);
		px.push_back(Point(tx, ty));
	}
	for(int i=0;i<V;i++){
		for(int j=i+1;j<V;j++){
			double dist = px[i] - px[j];
			map[i].push_back(Edge(j, dist));
			map[j].push_back(Edge(i, dist));
		}
	}
	
	visited[0] = true;
	for(Edge &next: map[0]){
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
	
	double sm = 0;
	for(int i=0;i<ans.size();i++){
		sm += ans[i].v;
	}
	printf("%lf", sm);
	
	return 0;
}
