#include <stdio.h>

int main(){
	int n = 0;
	int t;
	const int d[4]={0, 1, 2, 3};
	const char ans[5]="NESW";
	for(int i=0;i<10;i++){
		scanf("%d", &t);
		n += d[t];
	}
	printf("%c", ans[n%4]);
	
	return 0;
}
