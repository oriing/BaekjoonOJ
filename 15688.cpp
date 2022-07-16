#include <stdio.h>
#include <algorithm>
int n, d[1000010];

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &d[i]);
	}
	std::sort(d, d+n);
	for(int i=0;i<n;i++){
		printf("%d\n", d[i]);
	}
	
	
	return 0;
}
