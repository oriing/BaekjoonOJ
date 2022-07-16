#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int ans=0, d[1002]={}, n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++) scanf("%d", d+i);
	
	sort(d+1, d+n+1);
	
	for(int i=1;i<=n;i++) d[i]=d[i-1]+d[i];
	for(int i=1;i<=n;i++) ans+=d[i];
	printf("%d", ans);
	
	return 0;
}
