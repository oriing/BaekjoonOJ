#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	int n;
	long long int d[100]={0, 1};
	scanf("%d", &n);
	for(int i=2;i<=n;i++) d[i]=d[i-1]+d[i-2];
	printf("%lld", d[n]);
	
	return 0;
}
