#include <stdio.h>
int a[3];

int get(int x, int v, int k){
	if(v==0){
		if(x==0) return k;
		else return 0;
	}
	v--;
	if(get(x-a[v], v, k+1)) return 1;
	if(get(x, v, k)) return 1;
	if(get(x+a[v], v, k+1)) return 1;
	return 0;
}

int main(){
	scanf("%d %d %d", a, a+1, a+2);
	
	if(get(0, 3, 0)) printf("S");
	else printf("N");
	return 0;
}
