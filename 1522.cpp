#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int 	n, cnt=0, mn=2147483647, tmp;
	char	s[2010]={};
	
	scanf("%s", s);
	n = strlen(s);
	
	for(int i=0;i<n;i++){
		if(s[i] == 'a'){
			cnt++;
		}
	}
	for(int i=0;i<n;i++){
		s[i+n]=s[i];
	}
	
	
	for(int i=0;i<n;i++){
		tmp = 0;
		
		for(int j=i;j<i+cnt;j++){
			if(s[j] == 'b') tmp++;
		}
		
		if(tmp<mn) mn=tmp;
	}
	
	printf("%d", mn);
	
	return 0;
}
