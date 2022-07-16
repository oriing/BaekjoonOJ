#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int a, b;
	char d[101]={};
	scanf("%s", d);
	
	a=strlen(d);
	b=d[0]-'0';
	int bef=a*b;
	if(bef<10){
		b=1;
		a=bef;
	}
	else{
		b=2;
		a=bef/10;
	}
	for(int i=0;i<1000;i++){
		int now=a*b;
		if(now==bef){
			printf("FA");
			exit(0);
		}
		bef=now;
		if(bef<10){
			b=1;
			a=bef;
		}
		else{
			b=2;
			a=bef/10;
		}
	}
	
	printf("NFA");
	return 0;
}
