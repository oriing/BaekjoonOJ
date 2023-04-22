#include <stdio.h>
#include <math.h>
int main(){
	double a, b, m, ans;
	scanf("%lf %lf", &a, &b);
	m=(b-a)/400;
	
	printf("%.15lf", 1/(1+pow(10, (b-a)/400)));
}
