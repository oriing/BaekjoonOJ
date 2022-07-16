#include <stdio.h>
#include <queue>
#include <algorithm>
using namespace std;
typedef pair<long long int,long long int> pii;

int main(){
	long long int a, b;
	queue<pii> q;
	scanf("%lld %lld", &a, &b);
	q.push(make_pair(a, 1));
	
	while(!q.empty()){
		pii temp=q.front();
		
		if(temp.first==b){
			printf("%lld", temp.second);
			return 0;
		}
		
		long long int te=temp.first*2;
		if(te<=b){
			q.push(make_pair(te, temp.second+1));
		}
		te=temp.first*10+1;
		if(te<=b){
			q.push(make_pair(te, temp.second+1));
		}
		
		q.pop();
	}
	printf("-1");
}
