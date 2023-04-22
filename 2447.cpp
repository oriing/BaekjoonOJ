#include <stdio.h>

int main(){
	int n, te;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			te=1;
			for(int k=3;k<=n;k*=3){
				if(i%k/(k/3) == 1){
					if(j%k/(k/3) == 1){
						printf(" ");
						te=0;
						break;
					}
				}
			}
			if(te) printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
