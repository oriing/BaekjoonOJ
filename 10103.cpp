#include <stdio.h>

int main(){
	int a=100, b=100;
	int n, ia, ib;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &ia, &ib);
		if(ia<ib) a-=ib;
		else if(ia>ib) b-=ia;
	}
	printf("%d %d", a, b);
	
	return 0;
}
