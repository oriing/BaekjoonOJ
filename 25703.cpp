#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	printf("int a;\n");
	if(n>=1) printf("int *ptr = &a;\n");
	if(n>=2) printf("int **ptr2 = &ptr;\n");
	for(int i=2; i<n;i++){
		printf("int ");
		for(int j=0;j<=i;j++) printf("*");
		printf("ptr%d = &ptr%d;\n", i+1, i);
	}
	
	return 0;
}
