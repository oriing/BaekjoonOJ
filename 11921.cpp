#include <stdio.h>
int main(){
	int n, s=0, t;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		while((t=getchar()) == '\n');
		s+=t-'0';
	}
	printf("%d\n%d", n, s);
	return 0;
}
