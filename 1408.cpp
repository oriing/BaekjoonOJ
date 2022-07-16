#include <stdio.h>

int main(){
	int a, b, c, d, e, f;
	scanf("%d:%d:%d %d:%d:%d", &d, &e, &f, &a, &b, &c);
	if(c-f<0) {
		b--; c+=60;
	}
	if(b-e<0) {
		a--; b+=60;
	}
	if(a-d<0) {
		a+=24;
	}
	printf("%02d:%02d:%02d", a-d, b-e, c-f);
	
	return 0;
}
