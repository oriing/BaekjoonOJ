#include <stdio.h>
#include <string.h>

int main(){
	char d[100010]={};
	int ans = 0;
	int cnt = 0;
	
	scanf("%s", d);
	int len = strlen(d);
	
	for(int i=0;i<len;i++){
		if(d[i] == '(' && d[i+1] == ')'){
			ans += cnt;
			i++;
		}
		else if(d[i] == '('){
			cnt++; ans++;
		}
		else cnt--;
	}
	printf("%d", ans);
	
	return 0;
}
