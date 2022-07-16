#include <stdio.h>
#include <string.h>

int su(int a, int b){
	return (a+b)%10;
}

int main(){
	char a[100], b[100];
	scanf("%s %s", a, b);
	int n=strlen(a);
	int j=0;
	int d[100]={};
	for(int i=0;i<n;i++){
		d[j++]=a[i]-'0';
		d[j++]=b[i]-'0';
	}
	
	for(int i=n*2-1;i>=2;i--){
		int imsi[100]={};
		
		for(int j=0;j<i;j++){
			imsi[j]=su(d[j], d[j+1]);
		}
		for(int j=0;j<i;j++){
			d[j]=imsi[j];
		}
	}
	printf("%d%d", d[0], d[1]);
}
