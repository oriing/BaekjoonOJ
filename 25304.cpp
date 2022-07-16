#include <stdio.h>

int main(){
	int x, n, a=0;
	scanf("%d %d", &x, &n);
	for(int i=0;i<n;i++){
		int q, w;
		scanf("%d %d", &q, &w);
		a+=q*w;
		if(a>x){
			break;
		}
	}
	if(a==x)printf("Yes");
	else printf("No");
	return 0;
}
