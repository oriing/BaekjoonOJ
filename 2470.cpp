#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int main(){
	int n, t;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &t);
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	int p=0, q=n-1, pmax=0, qmax=n-1, pqv=2147483647;
	
	while(p<q){
		if(abs(v[q]+v[p]) < pqv){
			pqv = abs(v[q]+v[p]);
			pmax = p;
			qmax = q;
		}
		if(v[q]+v[p] > 0){
			q--;
		} else {
			p++;
		}
	}
	printf("%d %d", v[pmax], v[qmax]);
	
	return 0;
}
