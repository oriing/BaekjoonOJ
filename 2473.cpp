#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int ll;

int n;
ll mi = 10000000000, nv;
int l, m, r, t, ml, mm, mr;
vector<int> v;

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &t);
		v.push_back(t);
	}
	
	sort(v.begin(), v.end());
	
	for(m=0;m<n;m++){
		l = 0;
		r = n-1;
		while(l < m && m < r){
			nv = (ll) v[l] + v[r] + v[m];
			if(abs(nv) < mi){
				ml = l;
				mm = m;
				mr = r;
				mi = abs(nv);
			}
			if(nv > 0){
				r--;
			}
			else{
				l++;
			}
		}
	}
	printf("%d %d %d", v[ml], v[mm], v[mr]);
	
	return 0;
}
