#include <stdio.h>
#include <string.h>



int main(){
	int d=1;
	do{
		scanf("%d", &d);
		if(d){
		int t=d;
		int u=d/10000+d/1000%10*10+d/100%10*100+d/10%10*1000+d%10*10000;
			
		while(!(u%10)) u/=10;
		
		while(t){
			if(t%10!=u%10){
				printf("no\n");
				break;
			} else {
				t/=10;
				u/=10;
			}
		}
		if(!t) printf("yes\n");
		}
	} while(d);
	
	return 0;
}
