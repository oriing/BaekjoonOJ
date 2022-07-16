#include <stdio.h>
#include <queue>
#include <algorithm>
#include <stdlib.h>
using namespace std;

typedef pair<int,int> pii;

queue<pii> q;
int f, s, g, u, d, dp[1000010]={};

int main(){
	scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);
	
	q.push(make_pair(s, 0));
	dp[s]=1;
	while(!q.empty()){
		pii a=q.front(); q.pop();
		
		if(a.first==g){
			printf("%d", a.second);
			exit(0);
		}
		
		if(a.first+u<=f) if(dp[a.first+u]==0) {q.push(make_pair(a.first+u, a.second+1));dp[a.first+u]=1;}
		if(a.first-d>0) if(dp[a.first-d]==0) {q.push(make_pair(a.first-d, a.second+1));dp[a.first-d]=1;}
	}
	printf("use the stairs");
	return 0;
}
