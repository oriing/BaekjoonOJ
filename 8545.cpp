#include <stdio.h>
#include <string.h>

int main(){
	char a[1100]={};
	
	scanf("%s", a);
	
	int an=strlen(a);
	
	for(int i=an-1;i>=0;i--) printf("%c", a[i]);
}
