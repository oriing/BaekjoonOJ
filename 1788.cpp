#include <stdio.h>
#define RING 1000000000

int main(){
	int n, sign=1, bef=0, now=1;
	scanf("%d", &n);
	if(n==0){
		printf("0\n0");
		return 0;
	}
	if(n<0){
		if(n%2==0) sign=-1;
		n = -n;
	}
	
	for(int i=1;i<n;i++){
		int t = bef+now; t %= RING;
		bef=now;
		now=t;
	}
	printf("%d\n", sign);
	printf("%d", now);
	
	
	return 0;
}
