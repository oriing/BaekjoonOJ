#include <stdio.h>
int bhh(int n, int a){
	if(a==0) return 0;
	if(a==n) return n+bhh(n, a/10)+a%10;
	else return bhh(n, a/10)+a%10;
}
int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		if(bhh(i, i)==n){
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
	return 0;
}
