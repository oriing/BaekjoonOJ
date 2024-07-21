#include <stdio.h>
#include <math.h>
#define func(x) (floor(x*10000000000)/10000000000)
const long double delta = 0.00000000005;
double mid, val;
long double find(double l, double r, int tar){
	mid = (l+r)/2;
	val = mid*mid*mid;
	if(tar - delta < val && val < tar + delta) return mid;
	if(val < tar) return find(mid, r, tar);
	if(val > tar) return find(l, mid, tar);
	return 0;
}

void gos(){
	int n;
	scanf("%d", &n);
	if(n==1) {
		printf("1.0000000000\n");
		return;
	}
	if(n==2){
		printf("1.2599210498\n");
		return;
	}
	long double res = find(1, sqrt(n), n);
	printf("%.10f\n", func(res));
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		gos();
	}
	return 0;
}
