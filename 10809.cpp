#include <stdio.h>
#include <string.h>
int main(){
	char s[105]; int n, t;
	scanf("%s", s);
	n=strlen(s);
	
	for(int i=0;i<26;i++){
		t=-1;
		for(int j=0;j<n;j++){
			if(i+'a'==s[j]){
				t=j;
				break;
			}
		}
				printf("%d ", t);
	}
	
	return 0;
}
