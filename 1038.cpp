#include <stdio.h>
int n;

int gos(long long int bef, int mx){
	for(int i=0;i<mx;i++){
		n--;
		if(!n){
			printf("%lld", bef*10+i);
			return 1;
		}
	}
	return 0;
}

int gos2(long long int bef, int mx, int times){
	if(times==1){
		return gos(bef, mx);
	}
	else{
		for(int i=0;i<mx;i++){
			if(gos2(bef*10+i, i, times-1)==1) return 1;
		}
	}
	return 0;
}

int main(){
	scanf("%d", &n);
	n++;
	for(int i=0;i<=10;i++)
		if(gos2(0, 10, i)) return 0;
	
	printf("-1");
	
	return 0;
}
