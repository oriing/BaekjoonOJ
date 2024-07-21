#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, t;
	vector<int> v;
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%d", &t);
		auto p = upper_bound(v.begin(), v.end(), t);
		if(p == v.end()) v.push_back(t);
		else *p = t;
	}
	printf("%d", n-v.size());
	
	return 0;
}
