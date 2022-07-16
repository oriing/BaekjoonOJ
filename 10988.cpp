#include <stdio.h>
#include <string.h>
int main(){
	char a[101]={};
	int n;
	scanf("%s", a);
	n=strlen(a);
	
	for(int i=0;i<=(n+1)/2;i++){
		if(a[i]!=a[n-i-1]){
			printf("0");
			return 0;
		}
	}
		
	printf("1");
	return 0;
}
