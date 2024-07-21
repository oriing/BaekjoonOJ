#include <stdio.h>

int main(){
	int bef = 0;
	int now = 0, cnt=0;
	int n;
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		bef = now;
		scanf("%d", &now);
		if(bef <= now) cnt++;
	}
	printf("%d", cnt);
	
	return 0;
}
