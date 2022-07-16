#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void gos(){
	int n;
	scanf("%d", &n);
	double c=0, r=0, t1, t2;
	for(int i=0;i<n;i++){
		scanf("%lf %lf", &t1, &t2);
		c+=t1;
		r+=t2*t1;
	}
	printf("%d %.1lf\n", (int)c, r/c);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)gos();
	
	return 0;
}
