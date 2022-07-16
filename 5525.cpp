#include <string.h>
#include <stdio.h>

int main(){
	int n, m;
	char d[1000011]={};
	scanf("%d %d %s", &n, &m, d);
	int ioitime=0;
	int ans=0;
	
	for(int i=0;i<m;i++){
		if(d[i]=='I' && d[i+1]=='O' && d[i+2]=='I'){
			ioitime++;
			if(ioitime>=n) ans++;
			i++;
		} else{
			ioitime=0;
		}
	}
	printf("%d", ans);
	return 0;
}
