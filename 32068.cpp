#include <stdio.h>

int min(int a, int b){
	return a<b?a:b;
}
int find(){
	int a, b, c;
	scanf("%d %d %d", &b, &c, &a);
	if(b==a || c==a){
		printf("1");
		return 0;
	}
	if(b<a && a<c){
		int x = a-b; int y = c-a;
		printf("%d", min(x*2, y*2-1)+1);
	}
	else if(a<b && a<c){
		printf("%d", (b-a)*2);
	}
	else{
		printf("%d", (a-c)*2+1);
	}
	
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		find();
		printf("\n");
	}
}
