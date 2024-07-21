#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char fun[10]; int x;
	int val = 0;
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%s", fun);
		
		if(!strcmp(fun, "add")){
			scanf("%d", &x);
			val |= 2<<x;
		}
		else if(!strcmp(fun, "remove")){
			scanf("%d", &x);
			val &= ~(2<<x);
		}
		else if(!strcmp(fun, "check")){
			scanf("%d", &x);
			printf("%d\n", (val&(2<<x))?1:0);
		}
		else if(!strcmp(fun, "toggle")){
			scanf("%d", &x);
			val ^= 2<<x;
		}
		else if(!strcmp(fun, "all")){
			val = 4194302;
		}
		else if(!strcmp(fun, "empty")){
			val = 0;
		}
		
	}
	
	return 0;
}
