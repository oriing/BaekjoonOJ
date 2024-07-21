#include <stdio.h>
typedef long long int lli;

int ccw(lli x1, lli y1, lli x2, lli y2, lli x3, lli y3){
	lli a = x1 * y2 + x2 * y3 + x3 * y1;
	lli b = y1 * x2 + y2 * x3 + y3 * x1;
	return b-a>0?1:-1;
}

int main(){
	lli x1, y1, x2, y2, x3, y3, x4, y4;
	int abc, abd, cda, cdb;
	
	scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
	scanf("%lld %lld %lld %lld", &x3, &y3, &x4, &y4);
	
	abc = ccw(x1, y1, x2, y2, x3, y3);
	abd = ccw(x1, y1, x2, y2, x4, y4);
	cda = ccw(x3, y3, x4, y4, x1, y1);
	cdb = ccw(x3, y3, x4, y4, x2, y2);
	
	printf("%d", abc * abd < 0 && cda * cdb < 0);
	
	return 0;
}
