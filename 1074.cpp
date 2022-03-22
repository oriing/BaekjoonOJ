#include <stdio.h>

int ni=0;
int n, size=1, tx, ty, end=0;

void slice(int x, int y, int ns){
	if(end) return;
	if(ns==1){
		if(tx==x&&ty==y){
			printf("%d", ni);
			end=1;
			return;
		}
		ni++;
		return;
	}
	if(tx<x||x+ns<tx||ty<y||y+ns<ty){
		ni+=ns*ns;
		return;
	} 
	slice(x, y, ns/2);
	slice(x+ns/2, y, ns/2);
	slice(x, y+ns/2, ns/2);
	slice(x+ns/2, y+ns/2, ns/2);
}

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++) size*=2;
	scanf("%d %d", &ty, &tx);
	slice(0, 0, size);
	
	return 0;
}
