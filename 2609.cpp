#include <stdio.h>

int maxg(int a, int b){
	if(b==0) return a;
	else return maxg(b, a%b);
}
long long int ming(int a, int b){
	return (long long int)a*b/maxg(a, b); 
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n%lld", maxg(a, b), ming(a, b));
	
	return 0;
}
