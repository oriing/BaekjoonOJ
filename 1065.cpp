#include <stdio.h>

int getx(int x, int t){
	for(int i=0;i<t;i++) x /= 10;
	return x%10;
}

int check(int x, int t){
	if(t <= 2) return 1;
	int d[5]={};
	for(int i=0;i<t;i++){
		d[i] = getx(x, i);
//		printf("%d", d[i]);
	}
//	printf("\n");
	int dp = d[0] - d[1];
	for(int i=0;i<t-1;i++){
		if(d[i] - d[i+1] != dp) return 0;
	}
	return 1;
}

int main(){
	int n;
	int ans = 0;
	scanf("%d", &n);
	for(int i=1;i<=n && i < 10;i++) ans += check(i, 1);
	for(int i=10;i<=n && i < 100;i++) ans += check(i, 2);
	for(int i=100;i<=n && i < 1000;i++) ans += check(i, 3);
	for(int i=1000;i<=n && i < 10000;i++) ans += check(i, 4);
	
	printf("%d", ans);
	return 0;
}
