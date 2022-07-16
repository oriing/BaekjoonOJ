#include <iostream>
#include <string>
#include <stdio.h>

void f(){
	int n, m, k, d;
	scanf("%d %d %d %d", &n, &m, &k, &d);
	int imsi=n*m*(m-1)/2*k+m*m*n*(n-1)/2;
	int i=d/imsi;
	if(imsi>d) i--;
	if(i<=0) printf("-1\n");
	else printf("%d\n", imsi*i);
	/*
	int i=0; long long int now;
	do{
		i++;
		now=(long long int)n*m*(m-1)/2*k*i+i*m*m*n*(n-1)/2;
	} while(now<=d);
	i--;
	if(i==0) printf("-1\n");
	else printf("%d\n", (n*m*(m-1)/2*k*i) + (i*m*m*n*(n-1)/2));

	*/
}

int main() {
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		f();
	}

	return 0;
}

