#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;

class Edge{
public:
	int x;
	int y;
	int d;
	Edge(int x, int y, int d){
		this->x = x;
		this->y = y;
		this->d = d;
	}
	bool operator<(Edge &edge){
		return this->d < edge.d;
	}
};

int n, k;
vi owner[50010];
int check[50010];
vector<Edge> map;

int getParent(int p){
	if(check[p]==p) return p;
	return getParent(check[p]);
}

void unionParent(int p1, int p2){
	p1 = getParent(p1);
	p2 = getParent(p2);
	if(p1<p2) check[p2] = p1;
	else check[p1] = p2;
}

bool isCycle(int p1, int p2){
	p1 = getParent(p1);
	p2 = getParent(p2);
	if(p1==p2) return true;
	else return false;
}

int main(){
	int sum = 0;
	for(int i=0;i<v.size();++i){
		//싸이클이 존재하지 않으면 비용을 더합니다. 
		if(!isCycle(v[i].node[0], v[i].node[1])){
			sum+=v[i].distance;
			unionParent(v[i].node[0], v[i].node[1]);
		}
	}
	
	printf("%d\n", sum);
	
	return 0;
}

int main(){
	int m, temp, temp2, temp3;
	int ans = 0;
	scanf("%d %d %d", &n, &k, &m);
	
	for(int i=1;i<=n;i++){
		scanf("%d", &temp);
		owner[temp].push_back(i);
	}
	for(int i=1;i<=m;i++){
		scanf("%d %d %d", &temp, &temp2, &temp3);
		map.push_back(Edge(temp, temp2, temp3));
	}
	
	sort(map.begin(), map.end());
	for(int i=1;i<=n;i++){
		check[i] = i;
	}
	
	for(int i=0;i<map.size();++i){
		if( !isCycle(map[i].x, map[i].y) ){
			ans+=map[i].d;
			unionParent(map[i].x, map[i].y);
		}
	}
	
	printf("%d", ans);
	return 0;
}
