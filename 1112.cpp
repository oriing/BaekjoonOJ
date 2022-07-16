#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long long int x, b;
int pm;

int main(){
	scanf("%lld %lld", &x, &b);
	
	if((x>0 && b>0) || (x<0 && b<0)) ;
	else printf("-");
	if(x==0){
		printf("0");
		return 0;
	}
	x=abs(x); b=abs(b);
	int mxi;
	switch(b){
		case 2: mxi= 31;
		break;
		case 3: mxi= 20;
		break;
		case 4: mxi= 16;
		break;
		case 5: mxi= 14;
		break;
		case 6: mxi= 13;
		break;
		case 7: mxi= 12;
		break;
		case 8: mxi= 11;
		break;
		case 9: mxi= 11;
		break;
		case 10: mxi= 11;
	}
	long long int mainx=abs(x);
	for(int i=mxi;i>=0;i--){
		long long int k=pow(b, i);
		if(mainx<abs(k)) continue;
		if(abs(x)>=abs(k) && ()){
			printf("%lld", abs(x/k));
			x=x%k;
		}
		else printf("0");
	}
	
	return 0;
}
