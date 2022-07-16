#include <stdio.h>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

void gos(){
	int n; long long int t;
	priority_queue<long long int, vector<long long int>, greater<long long int> > d;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%lld", &t);
		d.push(t);
	}
	long long int ans=0;
	
	for(int i=1;i<n;i++){
		t=d.top();	d.pop();
		t+=d.top();	d.pop();
		ans+=t;
		d.push(t);
	}
	printf("%lld\n", ans);
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++) gos();
	return 0;
}
