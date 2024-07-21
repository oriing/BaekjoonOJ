#include <stdio.h>
#include <vector>

using namespace std;

struct Line{
	int start, end, value;
	
	Line(int s, int e, int v){
		start = s;
		end = e;
		value = v;
	}
	Line(){
		start = end = value = 0;
	}
};

int main(){
	int n, m, a, b, c;
	
	vector<Line> v;
	
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		scanf("%d %d %d", &a, &b, &c);
		v.push_back(Line(a, b, c));
	}
	
	long long int dist[510]={};
	bool dist_check[510] = {};
	for(int i=2;i<=n;i++) dist_check[i] = true;
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<m;j++){
			if(!dist_check[v[j].start] && (dist_check[v[j].end] || dist[v[j].end] > dist[v[j].start] + v[j].value)){
				dist[v[j].end] = dist[v[j].start] + v[j].value;
				dist_check[v[j].end] = false;
				if(i==n){
					printf("-1");
					return 0;
				}
			}
		}
	}
	
	for(int i=2;i<=n;i++){
		if(dist_check[i]) printf("-1\n");
		else printf("%lld\n", dist[i]);
	}
	
	return 0;
}
