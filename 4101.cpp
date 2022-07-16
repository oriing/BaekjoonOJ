#include <stdio.h>

int main(){
	int a=1, b=1;
	do{
		scanf("%d %d", &a, &b);
		if(a==0&&b==0) continue;
		if(a>b) printf("Yes\n");
		else printf("No\n");
	} while(a||b);
	
	return 0;
}
