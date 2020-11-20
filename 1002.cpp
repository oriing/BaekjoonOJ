#include <stdio.h>
#include <math.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define pow(a) ((a)*(a))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		int x1, x2, y1, y2, r1, r2;
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		if(x1==x2&&y1==y2&&r1==r2){
			printf("-1\n");
		} else if(x1==x2&&y1==y2&&r1!=r2) {
			printf("0\n");
		} else {
			double d=sqrt(pow(x1-x2)+pow(y1-y2));
			if(r1+r2<d||d+r1<r2||d+r2<r1) printf("0\n");
			else if(r1+r2==d||d+r1==r2||d+r2==r1) printf("1\n");
			else printf("2\n");
		}
	}
	
	return 0;
}
