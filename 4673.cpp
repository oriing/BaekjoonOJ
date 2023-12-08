#include <stdio.h>

int getSelfNumber(int n){
	int s=n;
	while(n!=0){
		s+=n%10;
		n/=10;
	}
	if(s>10000) return 0;
	return s;
}

int main(){
	int d[10010]={};
	for(int i=1;i<=10000;i++){
		if(!d[i]){
			printf("%d\n", i);
		}
		d[getSelfNumber(i)]=1;
	}
	
	return 0;
}
