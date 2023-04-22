#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	if(a==1 && b==1){
		printf("0");
		return 0;
	}
	int ans=0;
	if(a%2==0){
		if(b%2==0){
			ans=a/2*b;
		}
		else{
			ans=a/2*b;
		}
	}
	else{
		if(b%2==0){
			ans=b/2*a;
		}
		else{
			ans=a/2*b + b/2;
		}
	}
	printf("%d", ans);
	
	
	return 0;
}
