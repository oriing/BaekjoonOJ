#include <stdio.h>

int main(){
	int a, b, c, d, e, ans=0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	if(a<0){
		ans+=(-a)*c;
		a=0;
	} 
	if(a==0){
		ans+=d;
	}
	ans+=(b-a)*e;
	printf("%d", ans);
	
	return 0;
}
