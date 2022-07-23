#include <stdio.h>
#include <algorithm>

using namespace std;
typedef pair<int,int> pii;

struct gu{
	pii v;
	int check;
};

bool comp1(gu a, gu b){
	if(a.check!=b.check) return a.check<b.check;
	return a.v.first>b.v.first;
}
bool comp2(gu a, gu b){
	if(a.check!=b.check) return a.check<b.check;
	return a.v.second>b.v.second;
}

gu d[200010];
int main(){
	int n, m, k;
	
	scanf("%d %d %d", &n, &m, &k);
	
	for(int i=0;i<n;i++){
		scanf("%d %d", &d[i].v.first, &d[i].v.second);
		d[i].check=0;
	}
	
	sort(d, d+n, comp2);
	long long int ans=0;
	for(int i=0;i<k;i++){
		ans+=d[i].v.first;
		d[i].check=1;
	}
	sort(d, d+n, comp1);
	int x=0;
	for(int i=0;i<n;i++){
		if(x>=m) break;
		if(d[i].check) continue;
		x++;
		ans+=d[i].v.first;
	}
	
	
	printf("%lld", ans);
}
