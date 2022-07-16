#include <stdio.h>
#define max(a, b) (a>b?a:b)
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b&&b==c){
		printf("%d", 10000+a*1000);
	} else if(a==b){
		printf("%d", 1000+a*100);
	} else if(c==b){
		printf("%d", 1000+b*100);
	} else if(a==c){
		printf("%d", 1000+a*100);
	} else printf("%d", 100*(max(a, max(b, c))));
	
	return 0;
}
