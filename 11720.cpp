#include <stdio.h>

int main(){
	char a[105];
	int n, sum=0;
	
	scanf("%d %s", &n, a);
	
	for(int i=0;i<n;i++){
		sum+=a[i]-'0';
	}
	printf("%d", sum);
	
	return 0;
}
