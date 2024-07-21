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

int gos(){
	int n, m, a, b, c, t;
	
	vector<Line> v;
	
	scanf("%d %d %d", &n, &m, &t);
	for(int i=0;i<m;i++){
		scanf("%d %d %d", &a, &b, &c);
		v.push_back(Line(a, b, c));
		v.push_back(Line(b, a, c));
	}
	
	for(int i=0;i<t;i++){
		scanf("%d %d %d", &a, &b, &c);
		v.push_back(Line(a, b, -c));
	}
	
	
	m += m+t;
	long long int dist[510]={};
	bool dist_check[510] = {};
	for(int i=1;i<=n;i++) dist_check[i] = true;
	
	int nextpos = 1;
	bool loopgo = true;
	while(loopgo){
		loopgo = false;
		dist_check[nextpos] = false;
		
		for(int i=1;i<=n;i++){
			for(int j=0;j<m;j++){
				if(!dist_check[v[j].start] && (dist_check[v[j].end] || dist[v[j].end] > dist[v[j].start] + v[j].value)){
					dist[v[j].end] = dist[v[j].start] + v[j].value;
					dist_check[v[j].end] = false;
					if(i==n){
						printf("YES\n");
						return 0;
					}
				}
			}
		}
		
		for(int i=1;i<=n;i++){
			if(dist_check[i]){
				nextpos = i;
				loopgo = true;
				break;
			}
		}
	}
	
	printf("NO\n");
	
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++) gos();	
	return 0;
}
