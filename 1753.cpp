#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
#include <functional>

using namespace std;

typedef pair<int,int> pii;

class comp{
	public:
		bool operator()(pii &a, pii &b){
			return a.first>b.first;
		}
};

priority_queue<pii, vector<pii>,  comp> dj;
vector<pii> d[1010];

int main(){
	int n, m, s, e;
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		d[a].push_back(make_pair(b, c));
	}
	scanf("%d %d", &s, &e);
	int visit[1010]={};
	memset(visit, -1, sizeof(visit));
	
	visit[s]=0;
	dj.push(make_pair(0, s));
	
	while(!dj.empty()){
		pii now;
		now.first=dj.top().first;
		now.second=dj.top().second;
		dj.pop();
		
		for(int i=0;i<d[now.second].size();i++){
			int nextPos=d[now.second][i].first;
			if(visit[nextPos]==-1 || visit[nextPos]>visit[now.second]+d[now.second][i].second){
				visit[nextPos]=visit[now.second]+d[now.second][i].second;
//				printf("%d %d:%d\n", now.second, nextPos, visit[nextPos]);
				dj.push(make_pair(visit[nextPos], nextPos));
			}
		}
	}
	
	return 0;
}
