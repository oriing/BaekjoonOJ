#include <stdio.h>

int main(){
	int n, d[100]={};
	
	for(int i=0;i<28;i++) {
		scanf("%d", &n);
		d[n]=1;
	}
	
	for(int i=1;i<=30;i++) if(d[i]==0) printf("%d\n", i);
}
