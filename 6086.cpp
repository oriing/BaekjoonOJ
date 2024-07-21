#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <memory.h>
using namespace std;

int map[60][60]={};
int now[60][60]={};

int main(){
	int n;
	char t1[2], t2[2]; int x, tp, mi;
	int parent[60]={};
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%s %s %d", t1, t2, &x);
		if(t1[0]>90) t1[0]-=6;
		if(t2[0]>90) t2[0]-=6;
		map[t1[0]-'A'][t2[0]-'A']+=x;
		map[t2[0]-'A'][t1[0]-'A']+=x;
	}
	
	long long int ans=0;
	
	while(1){
		memset(parent, -1, sizeof(parent));
		queue<int> q;
		
		parent[0] = 0;
		q.push(0);
		
		while(!q.empty() && parent[25] == -1){
			int np = q.front(); q.pop();
			
			for(int i=0;i<52;i++){
				if(parent[i] == -1 && map[np][i] - now[np][i] > 0){
					parent[i] = np;
					q.push(i);
				}
			}
		}
		
		if(parent[25] == -1){
			break;
		}
		
		mi = 2147483647;
		tp = 25;
		while(tp != 0){
			mi = min(mi, map[parent[tp]][tp] - now[parent[tp]][tp]);
			tp = parent[tp];
		}
		tp = 25;
		while(tp != 0){
			now[parent[tp]][tp] += mi;
			now[tp][parent[tp]] -= mi;
			tp = parent[tp];
		}
		
		ans += mi;
	}
	
	printf("%lld", ans);
	
	return 0;
}
