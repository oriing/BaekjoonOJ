#include <stdio.h>

int main(){
	int a[2000001]={}, imsi, n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d", &imsi);
		a[imsi+1000000]++;
	}
	
	for(int i=0;i<=2000000;i++){
		for(int j=0;j<a[i];j++){
			printf("%d\n", i-1000000);
		}
	}
	return 0;
}
