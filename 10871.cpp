#include <stdio.h>

int main(){
	int n, x, imsi;
	scanf("%d %d", &n, &x);
	
	for(int i=0;i<n;i++){
		scanf("%d", &imsi);
		if(x>imsi) printf("%d ", imsi);
	}
	
	return 0;
}
