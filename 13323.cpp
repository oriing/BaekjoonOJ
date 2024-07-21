#include <stdio.h>
#include <queue>
using namespace std;

int main(){
	int n, k;
	long long int ans = 0;
	priority_queue<int> pq;
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%d", &k);
		k -= i;
		
		if(!pq.empty() && pq.top() > k){
			ans += pq.top()-k;
			pq.push(k);
			pq.pop();
		}
		pq.push(k);
	}
	printf("%lld", ans);
	
	return 0;
}
