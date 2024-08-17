#include <stdio.h>
#include <math.h>

typedef double ld;

void swap(ld &a, ld &b){
	ld temp = a;
	a = b;
	b = temp;
}
const ld pi = 3.14159265358979323846;
const ld al = pi*2;
void gos(){
	int n;
	ld x = 0, a, b;
	int x1, y1, x2, y2;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		
		a = atan2(x1, y1);
		b = atan2(x2, y2);
		
		if(a<b) swap(a, b);
		
		if(a-b < pi) x += (a - b) / al;
		else x += (al - a + b) / al;
//		printf("x : %.5lf\n", x);
	}
	printf("%.5lf\n", round(x*100000)/100000);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--) gos();
	
	return 0;
}
