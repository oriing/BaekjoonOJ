#include <stdio.h>

int main(){
	int n, d[101]={};
	scanf("%d", &n);
	for(int i=1;i<=n;i++) d[i]=i;
	while(n!=1){
		for(int i=1;i<=n/2;i++){
			d[i]=d[i*2];
		}
		n/=2;
	}
	printf("%d", d[1]);
	return 0;
}
