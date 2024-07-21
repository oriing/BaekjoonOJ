#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#define abs(x) ((x)>=0 ? (x) : -(x))

using namespace std;

int min(int a, int b, int c){
	if(a<=b && a<=c) return a;
	if(b<=a && b<=c) return b;
	if(c<=a && c<=b) return c;
}

int sort_point = 0;

class Point{
public:
	int x, y, z;
	Point(): x(0), y(0), z(0) {}
	Point(int x, int y, int z): x(x), y(y), z(z) {}
	
	int operator-(Point& o){
		return min(abs(x-o.x), abs(y-o.y), abs(z-o.z));
	}
	
	bool operator<(Point& o){
		switch(sort_point){
		case 1:
			return x < o.x;
			break;
		case 2:
			return y < o.y;
			break;
		case 3:
			return z < o.z;
			break;
		}
	}
};

class Edge{
public:
	int x, y, v;
	Edge(): x(0), y(0), v(0) {}
	Edge(int x, int y, int v): x(x), y(y), v(v) {}
	
	bool operator<(const Edge &other) const {
		return v < other.v;
	}
};

int V, E, check=0;
vector<Edge> pq;
vector<Point> px;
int root[100010] = {};

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
	int tx, ty, tz;
	scanf("%d", &V);
	
	for(int i=0;i<V;i++){
		scanf("%d %d %d", &tx, &ty, &tz);
		px.push_back(Point(tx, ty, tz));
	}
	
	for(int i=0;i<V;i++) root[i]=-1;
	
	sort_point = 0;
	for(int i=1;i<V;i++){
		if(px[i].x != px[i-1].x){
			pq.push_back(Edge(i, j, px[i] - px[i-1]));
		}
		else{
			unity(i-1, i);
			check++;
		}
	}
	sort_point = 1;
	for(int i=1;i<V;i++){
		if(px[i].y != px[i-1].y){
			pq.push_back(Edge(i, j, px[i] - px[i-1]));
		}
		else{
			unity(i-1, i);
			check++;
		}
	}
	sort_point = 2;
	for(int i=1;i<V;i++){
		if(px[i].z != px[i-1].z){
			pq.push_back(Edge(i, j, px[i] - px[i-1]));
		}
		else{
			unity(i-1, i);
			check++;
		}
	}
	
	sort(pq.begin(), pq.end());
	
	long long int sm = 0;
	int i = 0;
	while(check<V-1){
		Edge now = pq[i]; i++;
		if(find(now.x) == find(now.y)) continue;
		sm += now.v;
		unity(now.x, now.y);
		check++;
	}
	
	printf("%lld", sm);
	
	return 0;
}
