#include <stdio.h>

int f(int a, int b){
	int k=2, ans=1;
	while(a>1&&b>1&&a>=k&&b>=k){
		if(a%k==0&&b%k==0){
			ans*=k;
			a/=k;
			b/=k;
		} else {
			k++;
		}
	}
	return ans;
}

void gos(){
	int a, b;
	scanf("%d %d", &a, &b);
	int t=f(a, b);
	printf("%d\n", a*b/t);
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++) gos();
	
	return 0;
}
