#include <stdio.h>

int main(){
	int n, tem;
	scanf("%d", &n);
	int a[2]={};
	for(int i=0;i<n;i++){
		scanf("%d", &tem);
		a[tem]++;
	}
	printf("%s", a[0]>a[1]?"Junhee is not cute!":"Junhee is cute!");
	
	return 0;
}
