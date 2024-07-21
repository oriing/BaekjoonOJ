#include <stdio.h>
#include <deque>
#include <utility>

#define pos first
#define len second

typedef std::pair<int,int> pii;
const int MAX = 200010;

int N, K;
bool visited[MAX];
std::deque<pii> dq;

void find(){
	dq.push_front(std::make_pair(N, 0));
	
	while(!dq.empty()){
		pii now = dq.front(); dq.pop_front();
		
		if(now.pos==K){
			printf("%d", now.len);
			return;
		}
//		printf("%d\n", now.pos);
		
		if(now.pos<<1 < MAX && !visited[now.pos<<1]){
			dq.push_front(std::make_pair(now.pos<<1, now.len));
			visited[now.pos<<1] = true;
		}
		
		if(now.pos>0 && !visited[now.pos-1]){
			dq.push_back(std::make_pair(now.pos-1, now.len+1));
			visited[now.pos-1] = true;
		}
		
		if(now.pos<MAX-1 && !visited[now.pos+1]){
			dq.push_back(std::make_pair(now.pos+1, now.len+1));
			visited[now.pos+1] = true;
		}
	}
}

int main(){
	scanf("%d %d", &N, &K);
	
	find();
	
	return 0;
}
