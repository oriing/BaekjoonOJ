#include <stdio.h>
#include <algorithm>
using namespace std;

int n; pair<int, int> d[500100];

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &d[i].first);
		d[i].second=i;
	}
	sort(d, d+n);
	
	int ma=0, tmp;
	for(int i=0;i<n;i++){
		tmp=d[i].second-i;
		ma=max(ma, tmp);
	}
	printf("%d", ma);
	
	return 0;
}
