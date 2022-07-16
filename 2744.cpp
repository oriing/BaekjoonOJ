#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char d[101];
	scanf("%s", d);
	n=strlen(d);
	
	for(int i=0;i<n;i++) printf("%c", d[i]>='a'?d[i]-32:d[i]+32);
	
	return 0;
}
