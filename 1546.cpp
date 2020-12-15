#include <stdio.h>

int main(){
	int n, i, maxi=0, gra[1001]={}; double sum=0;
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &gra[i]);
		if(gra[i]>gra[maxi]) maxi=i;
	}
	
	for(i=0;i<n;i++){
		sum+=(double)gra[i]/(double)gra[maxi]*100;
	}
	printf("%.2f", sum/n);
	
	return 0;
}
