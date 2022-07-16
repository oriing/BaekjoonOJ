#include <stdio.h>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
	int n;
	pair<int, int> p[100001];
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d %d", &p[i].second, &p[i].first);
	sort(p, p+n);
	for(int i=0;i<n;i++) printf("%d %d\n", p[i].second, p[i].first);
	
	return 0;
}
