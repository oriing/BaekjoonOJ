#include <stdio.h>

int find(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	
	return 1;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a<=2){
		printf("2\n");
		a=3;
	}
	if(a%2==0) a++;
	for(int i=a;i<=b;i++){
		if(find(i)){
			printf("%d\n", i);
		}
	}
	
	return 0;
}
