#include <stdio.h>
#include <queue>
using namespace std;

int ans[1000010];
int main(){
	int n, k;
	priority_queue<int> pq;
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%d", &k);
		k -= i;
		
		pq.push(k);
		if(!pq.empty() && pq.top() > k){
			pq.push(k);
			pq.pop();
		}
		ans[i] = pq.top();
	}
	for(int i=n-2;i>=0;i--){
		if(ans[i]>ans[i+1]) ans[i] = ans[i+1];
	}
	for(int i=0;i<n;i++) printf("%d\n", ans[i] + i);
	
	return 0;
}
