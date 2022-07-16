#include <stdio.h>
#include <string.h>

int main(){
	char a[1100]={}, b[1100]={};
	
	scanf("%s %s", a, b);
	
	int an=strlen(a), bn=strlen(b);
	
	if(an>=bn){
		printf("go");
	}
	else printf("no");
}
