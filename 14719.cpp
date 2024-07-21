#include <stdio.h>
#define sumr(st, ed) (s[ed]-s[st-1]) 

int main(){
	int d[510], h, w, t;
	scanf("%d %d", &h, &w);
	for(int i=1;i<=w;i++){
		scanf("%d", d+i);
	}
	
	int ans = 0;
	
	for(int i=h;i>=1;i--){
		int bef = -1;
		for(int j=1;j<=w;j++){
			if(i <= d[j]){
				if(bef != -1){
					ans += j-bef-1;
				}
				bef = j;
			}
		}
	}
	
	printf("%d", ans);
	
	return 0;
}
