#include <stdio.h>
#include <algorithm>

int main(){
	int n;
	scanf("%d", &n);
	int d[1010];
	for(int i=0;i<n;i++) scanf("%d", d+i);
	std::sort(d, d+n);
	for(int i=0;i<n;i++) printf("%d\n", d[i]);
}
