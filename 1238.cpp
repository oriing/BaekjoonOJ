#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
typedef pair<int,int> pii;

int n, m, x;
vector<pii> d[1010];

struct pcmp{
	bool operator()(pii a, pii b){
		return a.second>b.second;
	}
};

int find(int s, int e){
	priority_queue<pii, vector<pii>, pcmp> q;
	int visit[1010]={};
	
	q.push(make_pair(s, 0));
	while(!q.empty()){
		pii p=make_pair(q.top().first, q.top().second);
		q.pop();
		
		if(p.first==e){
			return p.second;
		}
		if(visit[p.first]!=0 && p.second>visit[p.first]) continue;
		visit[p.first]=p.second;
//		printf("checkpoint");
		for(int i=0;i<d[p.first].size();i++){
			q.push(make_pair(d[p.first][i].first, d[p.first][i].second+p.second));
		}
	}
	return -1;
}

int main(){
	scanf("%d %d %d", &n, &m, &x);
	for(int i=0;i<m;i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		d[a].push_back(make_pair(b, c));
	}
	int mx=0;
	for(int i=1;i<=n;i++){
		if(i==x) continue;
		int v=find(i, x);
		v+=find(x, i);
		if(mx<v) mx=v;
//		printf("%d %d\n", i, v);
	}
	printf("%d", mx);
	
	return 0;
}
