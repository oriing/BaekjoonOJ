#include <stdio.h>

int main(){
	int d=0;
	int t, n, bef=0, bet=0, np=1;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &t);
		
		if(d==t){
			bef*=2;
			bet+=bef;
		} else{
			bef=2;
			bet+=bef;
			d=t; 
		}
		
		if(bet>=100){
			bet=0;
			bef=0;
			np++;
			d=0;
		}
	}
	printf("%d", bet);
}
