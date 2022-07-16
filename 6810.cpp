#include <stdio.h>

int main(){
	char d[]="9780921418";
	for(int i=0;i<10;i++) d[i]-='0';
	int k=0;
	for(int i=0;i<10;i++){
		if(i%2){
			k+=d[i]*3;
		} else {
			k+=d[i];
		}
	}
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	k+=a;
	k+=b*3;
	k+=c;
	printf("The 1-3-sum is %d", k);
}
