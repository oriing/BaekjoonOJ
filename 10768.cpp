#include <stdio.h>
int beaf(int a, int b){
	if(a<2) return 1;
	if(a==2&&b<18) return 1;
	return 0; 
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%s", a==2&&b==18?"Special":(beaf(a, b)?"Before":"After"));
	return 0;
}
