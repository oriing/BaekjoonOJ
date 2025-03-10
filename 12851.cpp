#include <stdio.h>
#include <deque>
#include <utility>

#define pos first
#define len second

typedef std::pair<int,int> pii;
const int MAX = 200010;

int N, K;
int visited[MAX];
int visitval[MAX];
std::deque<pii> dq;

void find(){
	dq.push_front(std::make_pair(N, 0));
	visited[N] = 1;
	
	while(!dq.empty()){
		pii now = dq.front(); dq.pop_front();
		
		if(now.pos == K){
			int ans = now.len, a=1;
			printf("%d\n", now.len);
			
			printf("%d", visited[now.pos]);
			return;
		}
//		printf("%d\n", now.len);
		
		if(now.pos<<1 < MAX){
			if(!visited[now.pos<<1]){
				dq.push_back(std::make_pair(now.pos<<1, now.len+1));
				visited[now.pos<<1]  = visited[now.pos];
				visitval[now.pos<<1] = now.len+1;
			}
			else if(visitval[now.pos<<1]==now.len+1) visited[now.pos<<1] += visited[now.pos];
		}
		
		if(now.pos>0){
			if(!visited[now.pos-1]){
				dq.push_back(std::make_pair(now.pos-1, now.len+1));
				visited[now.pos-1]  = visited[now.pos];
				visitval[now.pos-1] = now.len+1;
			}
			else if(visitval[now.pos-1]==now.len+1) visited[now.pos-1] += visited[now.pos];
		}
		
		if(now.pos<MAX-1){
			if(!visited[now.pos+1]){
				dq.push_back(std::make_pair(now.pos+1, now.len+1));
				visited[now.pos+1]  = visited[now.pos];
				visitval[now.pos+1] = now.len+1;
			}
			else if(visitval[now.pos+1]==now.len+1) visited[now.pos+1] += visited[now.pos];
		}
	}
}

int main(){
	scanf("%d %d", &N, &K);
	
	find();
	
	return 0;
}
