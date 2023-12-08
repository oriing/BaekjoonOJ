#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	long long int a=0, b=1, t;
	if(n==1) printf("1");
	else if(n==0) printf("0");
	else{
		for(int i=1;i<n;i++){
			t=a+b;
			a=b;
			b=t;
		}
		printf("%d", b);
	}
	return 0;
}
