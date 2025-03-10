#include <stdio.h>
#include <stdlib.h>
int n, d[1010] = {}, k;
int sm = 0;

void del(int x){
	for(int i=x;i<=n;i+=x){
		if(d[i]) continue;
		sm++;
		if(sm == k){
			printf("%d", i);
			exit(0);
		}
		d[i] = 1;
	}
}
int main(){
	scanf("%d %d", &n, &k);
	for(int i=2;i<=n;i++){
		if(!d[i]) del(i);
	}
	return 0;
}
