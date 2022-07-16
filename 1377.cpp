#include <stdio.h>
#include <algorithm>
using namespace std;
typedef pair<int,int> pii;

bool comp(pii a, pii b){
	return a.first<b.first;
}

int n; pii d[500100];
int main(){
	int bp=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &d[i].first);
		d[i].second=i;
	}
	stable_sort(d, d+n, comp);
	
	int ans=0;
	
	for(int i=0;i<n;i++){
		ans=max(ans, d[i].second-i);
	}
	
	printf("%d", ans+1);
	
	return 0;
}
