#include <queue>
#include <stdio.h>

int main(){
	std::queue<int> q;
	int x, sm=0, m, ans=0;
	int n, k;
	scanf("%d %d", &n, &m);
	while(n--){
		scanf("%d", &x);
		q.push(x);
		sm += x;
		while(m < sm){
			sm -= q.front();
			q.pop();
		}
//		printf("%d", sm);
		if(sm == m) ans++;
	}
	printf("%d", ans);
	
	return 0;
}
