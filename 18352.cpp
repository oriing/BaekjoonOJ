#include <stdio.h>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

typedef pair<int,int> pii;

int 		n, m, k, x, ta, tb;
int 		check[300010]={};
vector<int>	v[300010];
queue<pii>	q;

int main(){
	
	scanf("%d %d %d %d", &n, &m, &k, &x);
	
	for(int i=0;i<m;i++){
		scanf("%d %d", &ta, &tb);
		v[ta].push_back(tb);
	}
	
	q.push(make_pair(x, 0));
	check[x]=1;
	
	while(!q.empty()){
		pii np	= q.front();	q.pop();
		
		if(np.second == k) check[np.first]=-1;
		else if(np.second < k){
			for(int i=0; i < v[np.first].size(); i++){
				if(check[v[np.first][i]]) continue;
				q.push(make_pair(v[np.first][i], np.second+1));
				check[v[np.first][i]] = 1;
			}
		}
	}
	
	int pos=1;
	
	for(int i=1;i<=n;i++){
		if(check[i] == -1){
			printf("%d\n", i);
			pos=0;
		}
	}
	
	if(pos) printf("-1");
	
	return 0;
}
