#include <stdio.h>

int main(){
	int n, d[1010][4]={};
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d.%d.%d.%d", &d[i][0], &d[i][1], &d[i][2], &d[i][3]);
	}
	
	int tl=3;
	
	if(n==1){
		printf("%d.%d.%d.%d", d[0][0], d[0][1], d[0][2], d[0][3]);
		printf("\n255.255.255.255");
		return 0;
	}
	
	for(int i=1;i<n;i++){
		for(int j=0;j<3;j++){
			if(d[i][j]!=d[i-1][j]){
				if(tl>j) tl=j;
				break;
			}
		}
	}
	int bm=1;
	
	for(int i=1;i<n;i++){
		if(d[i][tl]==d[i-1][tl]) continue;
		
		for(int c=128;c>0;c/=2){
//			printf("%d: %d, %d\n", c, d[i][tl]&c, d[i-1][tl]&c);
			if((d[i][tl]&c) != (d[i-1][tl]&c)){
				if(bm<c*2) bm=c*2;
//				printf("%d\n", bm);
				break;
			}
		}
//		printf("\n");
	}
//	printf("%d %d\n", tl, bm);
	
	if(tl==3 && bm==1){
		printf("%d.%d.%d.%d", d[0][0], d[0][1], d[0][2], d[0][3]);
		printf("\n255.255.255.255");
		return 0;
	}
	
	for(int i=0;i<tl;i++){
		printf("%d", d[0][i]);
		if(i!=3) printf(".");
	}
	
	int im=0;
	for(int c=128;c>=bm;c/=2){
		if(im+c<=d[0][tl]) im+=c;
	}
	
	printf("%d", im);
	for(int i=tl+1;i<4;i++){
		printf(".0");
	}
	
	printf("\n");
	
	for(int i=0;i<tl;i++){
		printf("255");
		if(i!=3) printf(".");
	}
	im=0;
	for(int c=128;c>=bm;c/=2){
		im+=c;
	}
	printf("%d", im);
	for(int i=tl+1;i<4;i++){
		printf(".0");
	}
	
	return 0;
}
