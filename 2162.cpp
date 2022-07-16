#include <stdio.h>
#include <utility>
#include <algorithm>

using namespace std;
int parent[3001];
int n, m;

int find(int t){ //루트노드 갱신, find
	if(parent[t]<0) return t;
	else return parent[t]=find(parent[t]);
}

void unity(int x, int y){ //두 트리 합치기, union 
	x=find(x);
	y=find(y);
	if(x==y) return;
	if(parent[x]<parent[y]){
		parent[x]+=parent[y];
		parent[y]=x;
	} else {
		parent[y]+=parent[x];
		parent[x]=y;
	}
}

int ccw(pair<int, int> a, pair<int, int> b, pair<int, int> c){
	int op=a.first*b.second+b.first*c.second+c.first*a.second;
	op-=(a.second*b.first+b.second*c.first+c.second*a.first);
	
	if(op>0) return 1;
	else if(op==0) return 0;
	else return -1;
}

int check(pair<int, int> a, pair<int, int> b, pair<int, int> c, pair<int, int> d){
	int ab=ccw(c, d, a)*ccw(c, d, b);
	int cd=ccw(a, b, c)*ccw(a, b, d);
	if(ab==0&&cd==0){
		if(a>b) swap(a, b);
		if(c>d) swap(c, d);
		return c<=b&&a<=d;
	}
	return ab<=0&&cd<=0;
} 

int main(){
	pair<int, int> a[3001];
	pair<int, int> b[3001];
	scanf("%d", &n); 
	for(int i=0;i<n;i++){
		parent[i]=-1;
	}
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d", &a[i].first, &a[i].second, &b[i].first, &b[i].second);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(check(a[i], b[i], a[j], b[j])){
				unity(i, j); 
			}
		}
	}
	int max=0, cnt=0;
	for(int i=0;i<n;i++){
		if(max>parent[i]) max=parent[i];
		if(parent[i]<0) cnt++;
	}
	printf("%d\n%d", cnt, -max);
	
	return 0;
}
