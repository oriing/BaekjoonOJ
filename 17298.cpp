#include <stdio.h>
#include <string.h>
#include <stack>

int d[1000100];
std::stack<int> s;
std::stack<int> idx;
int t, x, n;

int main(){
	scanf("%d", &n);
	memset(d, -1, sizeof(d));
	for(int i=1;i<=n;i++){
		scanf("%d", &t);
		while(!s.empty() && s.top()<t){
			d[idx.top()]=t;
			s.pop(); idx.pop();
		}
		s.push(t); idx.push(i);
	}
	for(int i=1;i<=n;i++) printf("%d ", d[i]);
	
	return 0;
}
