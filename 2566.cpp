#include <stdio.h>

int main(){
	int n, m, x=-2147483647, t;
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			scanf("%d", &t);
			if(t > x){
				x = t;
				n = i;
				m = j;
			}
		}
	}
	printf("%d\n%d %d", x, n, m);
	
	return 0;
}
