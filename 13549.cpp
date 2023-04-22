#include <stdio.h>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;

typedef pair<int,int> pii;

int abs(int x){
	return x>0?x:-x;
}
int max(int a, int b){
	return a>b?a:b;
}

int main(){
	int k, n;
	scanf("%d %d", &n, &k);
	
	int dp[100100]={};
	for(int i=0;i<=100000;i++){
		dp[i]=abs(n-i);
	}
	priority_queue<pii, vector<pii>, greater<pii> > pq;
//	printf("%d\n", dp[3]);
	pq.push(make_pair(0, n));
	while(!pq.empty()){
		int nv=pq.top().second, val=pq.top().first;
		pq.pop();
//		printf("%d %d\n", nv, val);
		if(nv==k){
			printf("%d", val);
			break;
		}
		if(dp[nv]<val) continue;
		dp[nv]=val;
		
		if(nv*2<=100000){
			if(dp[nv*2]>val){
				pq.push(make_pair(val, nv*2));		
			}
		}
		if(nv+1<=100000){
			if(dp[nv+1]>=val+1){
				pq.push(make_pair(val+1, nv+1));
			}
		}
		if(nv-1>=0){
			if(dp[nv-1]>=val+1){
				pq.push(make_pair(val+1, nv-1));
			}
		}
	}
	
	return 0;
}
