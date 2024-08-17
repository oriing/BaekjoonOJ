#include <stdio.h>
#include <stack>
#include <vector>

std::stack<int> d[4];
int n, a[140]={}, t;
std::vector<int> ans[2];

int main(){
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d", &t);
		d[1].push(t);
		a[i]=1;
	}
	
	for(int i=n;i>=1;i--){
		int from = a[i];
		int to   = a[i]==1?2:1;
		
		while(d[from].top() != i){
			ans[0].push_back(from);
			ans[1].push_back(to);
			
			d[to].push(d[from].top());
			a[d[to].top()]=to;
			d[from].pop();
		}
		ans[0].push_back(from);
		ans[1].push_back(3);
		d[3].push(d[from].top());
		a[d[3].top()]=3;
		d[from].pop();
	}
	
	printf("%d\n", ans[0].size());
	for(int i=0;i<ans[0].size();i++){
		printf("%d %d\n", ans[0][i], ans[1][i]);
	}
	
	return 0;
}
