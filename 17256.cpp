#include <stdio.h>

int main(){
	int a[3], b[3];
	scanf("%d %d %d %d %d %d", a, a+1, a+2, b, b+1, b+2);
	printf("%d %d %d", b[0]-a[2], b[1]/a[1], b[2]-a[0]);
}
