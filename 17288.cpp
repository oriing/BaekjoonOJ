#include <stdio.h>

int main(){
	int c, n=0, bef=-1, ans=0;
	
	while((c=getchar()) != '\n'){
		if(c-1 == bef) n++;
		else{
			if(n==2) ans++;
			n=0;
		}
		bef=c;
	}
	if(c-1 == bef) n++;
	else{
		if(n==2) ans++;
		n=0;
	}
	printf("%d", ans);
	
	return 0;
}
