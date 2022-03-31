#include <stdio.h>

int main(){
	int n, m, a[20000001]={}, t;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &t);
		a[t+10000000]++;
	}
	scanf("%d", &m);
	for(int j=0;j<m;j++){
		scanf("%d", &t);
		printf("%d ", a[t+10000000]);
	}
	return 0;
}
