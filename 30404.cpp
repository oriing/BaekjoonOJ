#include <stdio.h>

int main(){
	int n, k, x, t, ans=0;
	scanf("%d %d %d", &n, &k, &x);
	for(int i=1;i<n;i++){
		scanf("%d", &t);
		if(x+k < t){
			ans++;
			x = t;
		}
	}
	printf("%d", ans+1);
	
	return 0;
}
