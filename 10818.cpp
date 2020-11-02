#include <stdio.h>

int main(){
	int n, imsi;
	int min=2147483647, max=-2147483648;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &imsi);
		if(imsi>max) max=imsi;
		if(imsi<min) min=imsi;
	}
	printf("%d %d", min, max);
	
	return 0;
}
