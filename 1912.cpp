#include <stdio.h>
int max(int a, int b){
	return a>b?a:b;
}
int main(){
	int mx = 0;
	int a=0, b=0, t, n, tp=-2147483647;
	scanf("%d %d", &n, &t);
	a=b=t;
	for(int i=1;i<n;i++){
		tp = max(tp, max(a, b));
		scanf("%d", &t);
		b = max(max(a, b), 0)+t;
		a = t;
//		printf("%d %d\n", a, b);
	}
	tp = max(tp, max(a, b));
	printf("%d", tp);
	
	return 0;
}
