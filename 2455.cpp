#include <stdio.h>

int main(){
	int a, b, now=0, mx=0;
	do{
		scanf("%d %d", &a, &b);
		now -= a;
		now += b;
		if(now > mx) mx = now; 
	} while(b != 0);
	printf("%d\n", mx);
}
