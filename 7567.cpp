#include <stdio.h>
#include <string.h>
int main(){
	char a[100]={};
	int n;
	int ans=0, now=0;
	scanf("%s", a);
	n=strlen(a);
	for(int i=0;i<n;i++){
		if(a[i]=='('||a[i]==')'){
			if(a[i]==now) ans+=5;
			else{
				ans+=10;
				now=a[i];
			}
		}
	}
	printf("%d", ans);
	
	return 0;
}
