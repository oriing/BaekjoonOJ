#include <stdio.h>

int main(){
	int a, b, c, d, e, f;
	scanf("%d : %d : %d %d : %d : %d", &a, &b, &c, &d, &e, &f);
	if(a>d || a==d && b>e || a==d && b==e && c>f) a-=24;
	printf("%d", d*3600+e*60+f-a*3600-b*60-c);
}
