#include <stdio.h>
#include <string.h>

int su(int a, int b){
	return (a+b)%10;
}

int main(){
	char a[5000], b[5000];
	int an[]={3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
	scanf("%s %s", a, b);
	int n=strlen(a);
	int j=0;
	int d[5000]={};
	for(int i=0;i<n;i++){
		d[j++]=an[a[i]-'A'];
		d[j++]=an[b[i]-'A'];
	}
	
	for(int i=n*2-1;i>=2;i--){
		int imsi[5000]={};
		
		for(int j=0;j<i;j++){
			imsi[j]=su(d[j], d[j+1]);
		}
		for(int j=0;j<i;j++){
			d[j]=imsi[j];
		}
	}
	printf("%d%d", d[0], d[1]);
}
