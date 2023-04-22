#include <stdio.h>
#define min(a, b) ((a)>(b)?(b):(a))
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int mi=2147483647;
	
	mi=min(mi, b*2+c*4);
	mi=min(mi, a*2+c*2);
	mi=min(mi, a*4+b*2);
	printf("%d", mi);
}
