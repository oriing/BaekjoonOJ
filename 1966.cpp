#include <stdio.h>
#include <utility>
#include <algorithm>
#include <queue>
using namespace std;

void gos(){
	int n, m, im=0, d[101]={};
	pair<int, int> a;
	queue<pair<int, int> > q;
	
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++){
		scanf("%d", &a.first);
		a.second=i;
		d[i]=a.first;
		q.push(a);
	}
	sort(d, d+n);
	for(int i=n-1;i>=0;i--){
		while(q.front().first!=d[i]){
			q.push(q.front());
			q.pop();
		}
		if(q.front().second==m){
			printf("%d\n", n-i);
			break;
		} else {
			q.pop();
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		gos();
	}
	
	return 0;
}
