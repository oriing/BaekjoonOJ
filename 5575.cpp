#include <stdio.h>

int main(){
	for(int i=0;i<3;i++){
		int a, b, c, d, e, f, g, h;
		scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
		g=a*60*60+b*60+c;
		h=d*60*60+e*60+f;
		int ans=h-g;
		printf("%d %d %d\n", ans/3600, ans/60%60, ans%60);
	}
	
	return 0;
}
