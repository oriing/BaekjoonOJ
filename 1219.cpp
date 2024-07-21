// 백준 11657번(타임머신)을 기준으로 작성함 
#include <stdio.h>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

typedef pair<int,int> pii;

const int MAXN = 100;
const int MAXM = 100;
const long long int INF = (long long int)1<<60;

vector<pii> map[MAXN];
long long int d[MAXN] = {};
bool inqueue[MAXN] = {};
int cnt[MAXN] = {};

int main(){
	int n, m, ta, tb, tv, s, e;
	queue<int> q;
	
	scanf("%d %d %d %d", &n, &s, &e, &m);
	for(int i=0;i<m;i++){
		scanf("%d %d %d", &ta, &tb, &tv);
		map[ta].push_back(make_pair(tb, -tv));
	}
	
	vector<int> pp;
	for(int i=0;i<n;i++){
		scanf("%d", &tv);
		pp.push_back(tv);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<map[i].size();j++){
			map[i][j].second += pp[map[i][j].first];
		}
	}
	
	for(int i=1; i<=n; i++) d[i] = -INF;
	
	q.push(s);
	inqueue[s] = true;
	d[s] = pp[s];
	
	while(!q.empty()){
		int t = q.front(); q.pop();
		inqueue[t] = false;
		
		if(++cnt[t] > n+1 || d[t] > INF){
			if(d[e] == -INF) printf("gg");
			else if(cnt[e] <= n && d[e] < (1<<50)) printf("%lld", d[e]);
			else printf("Gee");
			return 0;
		}
		
		for(pii a : map[t]){
			if(d[t] + a.second > d[a.first]){
				d[a.first] = d[t] + a.second;
				
				if(!inqueue[a.first]){
					q.push(a.first);
					inqueue[a.first] = true;
				}
			}
		}
	}
//	printf("%d\n", d[e]);
	if(d[e] == -INF){
		printf("gg\n");
	}
	else{
		printf("%lld\n", d[e]);
	}
	
	return 0;
}
