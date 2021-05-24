#include <stdio.h>
#define an(a, b) (a&&b)
int main(){
	int a[5]={};
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		int x, y;
		scanf("%d %d", &x, &y);
		if(an(x>0, y>0)) a[0]++;
		else if(an(x<0, y>0)) a[1]++;
		else if(an(x<0, y<0)) a[2]++;
		else if(an(x>0, y<0)) a[3]++;
		else a[4]++;
	}
	for(int i=0;i<4;i++){
		printf("Q%d: %d\n", i+1, a[i]);
	}
	printf("AXIS: %d", a[4]);
	return 0;
}
