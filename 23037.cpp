#include <stdio.h>
#include <string.h>
main(){
	char d[10]={};long long int a=0;
	scanf("%s",d);
	int n=strlen(d);
	for(int i=0;i<n;i++){
		d[i]-='0';
		a+=d[i]*d[i]*d[i]*d[i]*d[i];
	}
	printf("%d",a);
}

