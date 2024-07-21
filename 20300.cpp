#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	long long int n, t, mx=-1;
	vector<long long int> d;
	
	scanf("%lld", &n);
	
	for(int i=0;i<n;i++){
		scanf("%lld", &t);
		d.push_back(t);
	}
	sort(d.begin(), d.end());
	if(n%2){
		for(int i=0;i<n/2;i++){
			mx = max(mx, d[i]+d[n-i-2]);
		}
		mx = max(mx, d[n-1]);
	}
	else{
		for(int i=0;i<n/2;i++){
			mx = max(mx, d[i] + d[n-i-1]);
		}
	}
	
	printf("%lld", mx);
	
	return 0;
}
