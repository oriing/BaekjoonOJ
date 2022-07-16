#include <stdio.h>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int main(){
	int n, t;
	priority_queue<int, vector<int>, greater<int> > d;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &t);
		d.push(t);
	}
	long long int ans=0;
	
	for(int i=1;i<n;i++){
		t=d.top();	d.pop();
		t+=d.top();	d.pop();
		ans+=t;
		d.push(t);
	}
	printf("%lld", ans);
	
	return 0;
}
