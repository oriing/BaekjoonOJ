#include <stdio.h>

int main(){
	int max=0, im, maxi=0;
	
	for(int i=0;i<9;i++){
		scanf("%d", &im);
		if(im>max){
			maxi=i+1;
			max=im;
		}
	}
	printf("%d\n%d", max, maxi);
	
	return 0;
}
