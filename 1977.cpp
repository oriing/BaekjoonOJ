#include <stdio.h>

int main(){
	int m, n, min=0, sum=0;
	scanf("%d %d", &m, &n);
	for(int i=0;i*i<=n;i++){
		if(i*i<m) continue;
		if(!min)min=i*i;
		sum+=i*i;
	}
	if(sum){
		printf("%d\n%d", sum, min);
	}
	else printf("-1");
	
	return 0;
}
