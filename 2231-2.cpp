#include <stdio.h>

int res(int n){
	int t = n;
	int s = 0;
	while(t){
		s += t % 10;
		t /= 10;
	}
	return s + n;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<=n;i++){
		if(res(i) == n){
			printf("%d", i);
			return 0;
		}
	}
	
	printf("0");
	
	return 0;
}
