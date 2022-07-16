#include <stdio.h>

int main(){
	int n, s=0;
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		int a;
		scanf("%d", &a);
		s+=a-1;
	}
	
	printf("%d", s+1);
	
	return 0;
}
