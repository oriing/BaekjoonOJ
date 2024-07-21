// 백준 11657번(타임머신)을 기준으로 작성함 
#include <stdio.h>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

typedef pair<int,int> pii;

const int MAXN = 510;
const int MAXM = 6010;
const int INF = 1<<30;

vector<pii> map[MAXN];
int d[MAXN] = {};
bool inqueue[MAXN] = {};	// queue에 있는지 여부 확인 
int cnt[MAXN] = {};			// N번보다 더 연산할 경우 -> 음수 사이클 

int main(){
	int n, m, ta, tb, tv;
	queue<int> q;
	
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		scanf("%d %d %d", &ta, &tb, &tv);
		map[ta].push_back(make_pair(tb, tv));
	}
	
	for(int i=1; i<=n; i++) d[i] = INF;
	
	q.push(1); // 1번 도시를 시작점으로 기준한 코드 
	inqueue[1] = true;
	d[1] = 0;
	
	while(!q.empty()){ // 더 이상 갱신할 곳이 없으면 종료 
		int t = q.front(); q.pop();
		inqueue[t] = false; // queue 에서 빠졌으므로 
		
		if(++cnt[t] >= n || d[t] < -INF){
			// 특정 점이 N번 이상 반복되었다는 것은 음수 사이클이 있다는 의미 
			printf("-1");
			return 0;
		}
		
		for(pii a : map[t]){
			if(d[t] + a.second < d[a.first]){
				// 해당 점이 갱신되는 경우 
				d[a.first] = d[t] + a.second;
				
				if(!inqueue[a.first]){
					q.push(a.first);
					inqueue[a.first] = true;
				}
			}
		}
	}
	
	for(int i=2; i<=n; i++){
		// 1번 점부터 시작했으니 2번부터 출력하게 짰을 뿐임에 참고 
		if(d[i] == INF){
			printf("-1\n"); // 해당 점에 갈 수가 없는 경우 (문제에서 -1 출력하라고 제시함) 
		}
		else{
			printf("%d\n", d[i]);
		}
	}
	
	return 0;
}
