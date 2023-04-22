#include <stdio.h>
#define max(a, b) (a>b?a:b)

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a==b && (a||b))printf("Even %d", a*2);
	else if(a==0 && b==0) printf("Not a moose");
	else printf("Odd %d", max(a, b)*2);
	
	return 0;
}
