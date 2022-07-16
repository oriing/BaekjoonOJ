#include <stdio.h>

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	printf("%d %d %d", (a+(b+(c+d)/60)/60)%24, (b+(c+d)/60)%60, (c+d)%60);
	
	return 0;
}
