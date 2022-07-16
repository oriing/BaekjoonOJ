#include <stdio.h>

int main(){
	int n, d[12]={};
	scanf("%d", &n);
	
	d[1]=1;
	d[2]=2;
	d[3]=4;
	for(int i=4;i<12;i++){
		d[i]=d[i-1]+d[i-2]+d[i-3];
	}
	
	for(int i=0;i<n;i++){
		int a;
		scanf("%d", &a);
		
		printf("%d\n", d[a]);
	}
	
	return 0;
}
