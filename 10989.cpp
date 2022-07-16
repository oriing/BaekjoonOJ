#include <stdio.h>

int main(){
	int n, a[10001]={}, k;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &k);
		a[k]++;
	}
	for(int i=1;i<=10000;i++){
		for(int j=0;j<a[i];j++) printf("%d\n", i);
	}
	
	
	return 0;
}
