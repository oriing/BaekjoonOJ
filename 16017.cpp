#include <stdio.h>

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(a==8 || a==9){
		if(b==c){
			if(d==8 || d==9){
				printf("ignore");
				return 0;
			}
		}
	}
	printf("answer");
	return 0;
}
