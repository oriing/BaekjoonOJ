#include <stdio.h>

void go(int i){
	int c, v;
	scanf("%d %d", &c, &v);
	printf("Case %d: %d\n", i, c+v);
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) go(i+1);
	return 0;
}
