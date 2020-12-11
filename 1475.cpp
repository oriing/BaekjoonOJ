#include<stdio.h>

int main(){
	int n, p, max=0, a[9]={};
	scanf("%d", &n);
	
	do {
		if(n%10==6||n%10==9) a[6]++; 
		else a[n%10]++;
		n/=10;
	} while(n!=0);
	
	a[6]=(a[6]+1)/2;
	
	for(int i=0; i<=8; i++)
		if(max<a[i]) max=a[i];
	
	printf("%d", max);
}
