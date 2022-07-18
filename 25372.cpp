#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		char d[1010]={};
		scanf("%s", d);
		printf("%s", (strlen(d)>=6 && strlen(d)<=9)?"yes\n":"no\n");
	}
	
	return 0;
}
