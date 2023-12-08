#include <stdio.h>

int main(){
	int n;
	int d[1010], s[1010];
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d", d+i);
	for(int i=0;i<n;i++) scanf("%d", s+i);
	
	int ans=0;
	for(int i=0;i<n;i++) if(d[i]<=s[i]) ans++;
	printf("%d", ans);
	return 0;
}
