#include <stdio.h>
#include <string.h>
int main(){
	int imsi=0, thiss=1, c[26]={}, i, n;
	char s[1000005]={};
	
	scanf("%s", s);
	n=strlen(s);
	
	for(i=0;i<n;i++){
		if(s[i]<='Z') c[s[i]-'A']++;
		else c[s[i]-'a']++;
	}
	
	for(i=1;i<26;i++){
		if(c[i]>c[imsi]) {
			imsi=i;
			thiss=0;
		}
		if(c[i]==c[imsi]) thiss++;
	}
	if(thiss<=1) printf("%c", imsi+'A');
	else printf("?");
	
	return 0;
}
