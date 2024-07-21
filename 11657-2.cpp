// ���� 11657��(Ÿ�Ӹӽ�)�� �������� �ۼ��� 
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
bool inqueue[MAXN] = {};	// queue�� �ִ��� ���� Ȯ�� 
int cnt[MAXN] = {};			// N������ �� ������ ��� -> ���� ����Ŭ 

int main(){
	int n, m, ta, tb, tv;
	queue<int> q;
	
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		scanf("%d %d %d", &ta, &tb, &tv);
		map[ta].push_back(make_pair(tb, tv));
	}
	
	for(int i=1; i<=n; i++) d[i] = INF;
	
	q.push(1); // 1�� ���ø� ���������� ������ �ڵ� 
	inqueue[1] = true;
	d[1] = 0;
	
	while(!q.empty()){ // �� �̻� ������ ���� ������ ���� 
		int t = q.front(); q.pop();
		inqueue[t] = false; // queue ���� �������Ƿ� 
		
		if(++cnt[t] >= n || d[t] < -INF){
			// Ư�� ���� N�� �̻� �ݺ��Ǿ��ٴ� ���� ���� ����Ŭ�� �ִٴ� �ǹ� 
			printf("-1");
			return 0;
		}
		
		for(pii a : map[t]){
			if(d[t] + a.second < d[a.first]){
				// �ش� ���� ���ŵǴ� ��� 
				d[a.first] = d[t] + a.second;
				
				if(!inqueue[a.first]){
					q.push(a.first);
					inqueue[a.first] = true;
				}
			}
		}
	}
	
	for(int i=2; i<=n; i++){
		// 1�� ������ ���������� 2������ ����ϰ� ®�� ���ӿ� ���� 
		if(d[i] == INF){
			printf("-1\n"); // �ش� ���� �� ���� ���� ��� (�������� -1 ����϶�� ������) 
		}
		else{
			printf("%d\n", d[i]);
		}
	}
	
	return 0;
}
