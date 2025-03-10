#include <stdio.h>
#include <utility>
#include <queue>
#include <functional>
#include <map>

using namespace std;

typedef pair<int,int> pii;
priority_queue<pii, vector<pii>, greater<pii> > pq;
queue<pii> wts;
map<int,int> wt;

int mx = 0;
void checkmx(int a){
	if(mx<a) mx=a;
}
int main(){
	int a, b, n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &a, &b);
		pq.push(make_pair(b, a));
	}
	
	for(int i=1;i<=400000;i++){
		bool bts = false;
		while(!pq.empty() && pq.top().first == i){
			if(pq.top().second == i){
				pq.pop();
				bts = true;
				continue;
			}
			
			wt.insert({pq.top().second, pq.top().first});
			wts.push({pq.top().second, pq.top().first});
			pq.pop();
		}
		
		if(bts) continue;
		auto temp = wt.find(i);
		if(temp != wt.end()){
			checkmx(i - temp->second);
			wt.erase(temp);
		}
		else{
			do{
				if(wts.empty()) break;
				temp = wt.find(wts.front().first);
				wts.pop();
			} while(temp==wt.end());
			
			if(temp != wt.end()){
				checkmx(i - temp->second);
				wt.erase(temp);
			}
		}
	}
	printf("%d", mx);
	
	return 0;
}
