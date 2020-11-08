#include <stdio.h>
#define plu(X) ((min>( X ))?min= X :min)

int main(){
	int x, y, w, h;
	int min=2147483647;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	plu(h-y);
	plu(y);
	plu(w-x);
	plu(x);
	printf("%d", min);
	
	return 0;
}
