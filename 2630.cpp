#include <stdio.h>

int d[130][130]={};
int n;
int c1=0, c0=0;

void find(int xs, int xe, int ys, int ye){
	int check=d[ys][xs];
//	printf("%d %d %d %d %d\n", xs, xe, ys, ye, check);
	for(int i=ys; i<=ye; i++){
		for(int j=xs; j<=xe; j++){
			if(d[i][j]!=check){
				check=-1;
				break;
			}
		}
	}
	if(check==0){
		c0++;
		return;
	}
	if(check==1){
		c1++;
		return;
	}
	find(xs, xs+(xe-xs-1)/2, ys, ys+(ye-ys-1)/2);
	find(xs, xs+(xe-xs-1)/2, ys+(ye-ys-1)/2+1, ye);
	find(xs+(xe-xs-1)/2+1, xe, ys, ys+(ye-ys-1)/2);
	find(xs+(xe-xs-1)/2+1, xe, ys+(ye-ys-1)/2+1, ye);
}

int main(){
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d", &d[i][j]);
		}
	}
	
	find(1, n, 1, n);
	
	printf("%d\n%d", c0, c1);
	
	return 0;
}
