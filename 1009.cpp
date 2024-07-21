#include <stdio.h>

int next(int now, int x){
	return (now*x)%10;
}

void gos(){
	int a, b, ans=1;
	scanf("%d %d", &a, &b);
	ans = a%10;
	while(--b){
		ans = next(ans, a);
	}
	printf("%d\n", ans==0?10:ans);
}

int main(){
	int t; scanf("%d", &t);
	while(t--) gos();
	return 0;
}
