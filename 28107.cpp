#include <stdio.h>
#include <queue>

std::queue<int> q[200010];
int n, m;
int ans[100010]={};

int main(){
	scanf("%d %d", &n, &m);
	int t, k;
	for(int i=0;i<n;i++){
		scanf("%d", &k);
		for(int j=0;j<k;j++){
			scanf("%d", &t);
			q[t].push(i);
		}
	}
	
	for(int i=0;i<m;i++){
		scanf("%d", &t);
		if(q[t].empty()) continue;
		ans[q[t].front()]++;
		q[t].pop();
	}
	
	for(int i=0;i<n;i++){
		printf("%d ", ans[i]);
	}
	
	return 0;
}
