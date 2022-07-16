#include <stdio.h>

int main(){
	int a, b, c, abc;
	int k[10]={};
	
	scanf("%d %d %d", &a, &b, &c);
	abc=a*b*c;
	
	for(;abc!=0;abc/=10){
		k[abc%10]++;
	}
	
	for(int i=0;i<10;i++){
		printf("%d\n", k[i]);
	}
	
	return 0;
}
