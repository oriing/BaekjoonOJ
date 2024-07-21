#include <stdio.h>
#include <vector>
#define abs(X) ((X)>0?(X):-(X))
using namespace std;

class Edge{
public:
	int x, y;
	Edge(): x(0), y(0) {}
	Edge(int x, int y): x(x), y(y) {};
	
	long long int operator*(Edge& other){
		return (long long int)(x+other.x) * (y-other.y);
	}
};

int main(){
	int n, t1, t2;
	long long int sm=0;
	vector<Edge> v;
	
	scanf("%d", &n);
	scanf("%d %d", &t1, &t2);
	Edge fir(t1, t2);
	v.push_back(fir);
	for(int i=1;i<n;i++){
		scanf("%d %d", &t1, &t2);
		v.push_back(Edge(t1, t2));
	}
	v.push_back(fir);
	
	for(int i=0;i<n;i++){
		sm += v[i]*v[i+1];
	}
	printf("%lld.%d", abs(sm/2), abs(sm%2*5));
	
	return 0;
}
