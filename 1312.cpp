#include <stdio.h>

using namespace std;

int main(){
	int a, b, n;
	scanf("%d %d %d", &a, &b, &n);
	
	for(int i=1;i<=n;i++){
		a *= 10;
		if(i == n) printf("%d", a / b % 10);
		a %= b;
	}
	
	return 0;
}
