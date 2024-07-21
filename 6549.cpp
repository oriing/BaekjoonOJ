#include <stdio.h>
#include <algorithm>
#include <stack>

using namespace std;
typedef pair<int,int> pii;
typedef long long int lli;
int n;
lli mxh = 0;

int main(){
	int t; lli tmx; int a, b, checker;
	
	while(1){
		scanf("%d", &n);
		if(!n) break;
		
		mxh = 0;
		stack<pii> s;
		
		for(int i=0;i<n;i++){
			scanf("%d", &t);
			checker = 0;
			while(!s.empty() && s.top().first > t){
				tmx = ((lli)i-s.top().second) * s.top().first;
				if(tmx > mxh) mxh = tmx;
				a = t; b = s.top().second;
//				printf("%d: %d %d %lld\n", i, s.top().first, s.top().second, tmx);
				s.pop();
				checker = 1;
			}
			if(checker) s.push(make_pair(a, b));
			else s.push(make_pair(t, i));
		}
		
		while(!s.empty()){
			tmx = ((lli)n-s.top().second) * s.top().first;
			if(tmx > mxh) mxh = tmx;
//			printf("%d, %d %d %lld\n", n, s.top().first, s.top().second, tmx);
			s.pop();
		}
		
		printf("%lld\n", mxh);
	}
	
	return 0;
}
