#include <stdio.h>

using namespace std;

long long int d[100]={0, 1, 1, };

long long int f(int x){
	if(x==0) return 0;
	if(d[x]) return d[x];
	return d[x] = f(x-1)+f(x-2);
}

int main(){
	int x;
	scanf("%d", &x);
	printf("%lld", f(x));
	
	return 0;
}
