#include <stdio.h>

int main(){
	int e=1, s=1, m=1, te, ts, tm;
	int n=1;
	
	scanf("%d %d %d", &te, &ts, &tm);
	
	while(1){
		if(e==te && s==ts && m==tm){
			printf("%d", n);
			return 0;
		}
		e++; s++; m++;
		if(e==16) e=1;
		if(s==29) s=1;
		if(m==20) m=1;
		
		n++;
		
	}
	
	return 0;
}
