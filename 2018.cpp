#include <stdio.h>

int n, s, l, r, ans;

int main(){
	scanf("%d", &n);
	for(r=1;r<=n;r++){
		s += r;
		while(s > n) s -= l++;
		if(s == n) ans++;
	}
	printf("%d", ans);
	
	
	return 0;
}
