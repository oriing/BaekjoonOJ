#include <stdio.h>

int main(){
	long long int a, b, c;
	do{
		scanf("%d %d %d", &a, &b, &c);
		if(a!=0||b!=0||c!=0){
		if(a*a==b*b+c*c) printf("right\n");
		else if(b*b==a*a+c*c) printf("right\n");
		else if(c*c==b*b+a*a) printf("right\n");
		else printf("wrong\n");
		}
	} while(a!=0||b!=0||c!=0);
	
	return 0;
}
