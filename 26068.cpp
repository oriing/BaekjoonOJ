#include <stdio.h>

int main(){
	int n, x, ans=0;
	scanf("%d", &n);
	while(n--){
		scanf("D-%d", &x);
		if(x<=90) ans++;
	}
	printf("%d", ans);
	
	return 0;
}
