#include <stdio.h>

using namespace std;

int main(){
	int n, x;
	int mx=2147483647, bef, now;
	
	scanf("%d %d %d", &n, &x, &bef);
	
	for(int i=1;i<n;i++){
		scanf("%d", &now);
		if(bef + now < mx) mx = bef + now;
		bef = now;
	}
	
	printf("%d", mx*x);
	
	return 0;
}
