#include <stdio.h>

int slice(int a, int b){
	return a/b + (a%b?1:0);
}

int main(){
	int ans=0, n;
	int a[7], t, p;
	scanf("%d", &n);
	for(int i=0;i<6;i++){
		scanf("%d", a+i);
	}
	scanf("%d %d", &t, &p);
	
	for(int i=0;i<6;i++){
		ans += slice(a[i], t);
	}
	printf("%d\n%d %d", ans, n/p, n%p);
	
	return 0;
}
