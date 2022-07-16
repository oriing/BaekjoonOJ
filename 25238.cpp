#include <stdio.h>

int a, b;
int main(){
	scanf("%d %d", &a, &b);
	if((a*(100-b))/100>=100) printf("0");
	else printf("1");
}
