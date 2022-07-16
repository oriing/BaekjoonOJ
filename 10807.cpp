#include <stdio.h>

int main(){
	int n, d[1000], v;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d", d+i);
	scanf("%d", &v);
	int cnt=0;
	for(int i=0;i<n;i++) if(d[i]==v) cnt++;
	printf("%d", cnt);
}
