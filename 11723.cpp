#include <stdio.h>
#include <string.h>

int main(){
	int n, a, d[21]={};
	char s[10];
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%s", s);
		if(!strcmp(s, "add")){
			scanf("%d", &a);
			d[a]=1;
		}
		else if(!strcmp(s, "remove")){
			scanf("%d", &a);
			d[a]=0;
		}
		else if(!strcmp(s, "check")){
			scanf("%d", &a);
			printf("%d\n", d[a]);
		}
		else if(!strcmp(s, "toggle")){
			scanf("%d", &a);
			d[a]=d[a]?0:1;
		}
		else if(!strcmp(s, "all")){
			for(int i=1;i<=20;i++) d[i]=1;
		}
		else if(!strcmp(s, "empty")){
			for(int i=1;i<=20;i++) d[i]=0;
		}
	}
	
	return 0;
}
