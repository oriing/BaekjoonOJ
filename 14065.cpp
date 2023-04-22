#include <stdio.h>

int main(){
	double a;
	scanf("%lf", &a);
	
	printf("%.6lf", 100.00 / ((1.609344 / 3.785411784) * a));
	
	return 0;
}
