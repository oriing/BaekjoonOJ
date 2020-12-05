#include <stdio.h>
#include <string.h>
int main(){
	int n, i, cnt=1, imsi=0; char a[1000005]={};
	gets(a);
	n=strlen(a)-1;
	if(a[0]==' ') imsi++;
	for(i=0;i<n;i++){
		if(a[i]==' ') cnt++;
	}
	if(cnt+1==imsi){
		printf("0");
	}
	else printf("%d", cnt-imsi);
	return 0;
}
