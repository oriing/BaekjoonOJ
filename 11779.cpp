#include <stdio.h>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int,int> pii;

struct pcmp{
	bool operator()(pii a, pii b){
		return a.second>b.second;
	}
};

int main(){
	int n, m, s, e;
	vector<pii> v[1010];
	
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		v[a].push_back(make_pair(b, c));
	}
	scanf("%d %d", &s, &e);
	
	priority_queue<pii, vector<pii>, pcmp> q;
	
	q.push(make_pair(s, 0));
	int visit[1010]={};
	while(!q.empty()){
		int np=q.top().first;
		int nx=q.top().second;
		q.pop();
		
		if(np==e){
			printf("%d", nx);
			break;
		}
		if(visit[np]!=0 && nx>visit[np]) continue;
		
		for(int i=0;i<v[np].size();i++){
			q.push(make_pair(v[np][i].first, v[np][i].second + nx));
		}
	}
	
	
	return 0;
}
