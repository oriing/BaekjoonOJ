#include <stdio.h>
#define max(x, y) (x>y?x:y)

int nan(int a, int b){
	if(a%b){
		return a/b+1;
	}
	return a/b;
}

int main(){
	int l, a, b, c, d;
	
	scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
	
	printf("%d", l-max(nan(a, c), nan(b, d)));
	
	return 0;
}
