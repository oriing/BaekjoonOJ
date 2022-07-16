#include <stdio.h>

void dos(int n){
	int size=0, su=0, a[100001]={};
	for(int i=1;i<=(n+1)/2;i++){
		if(n%i==0){
			su+=i;
			a[size++]=i;
		}
	}
	if(su==n){
		printf("%d = %d", n, a[0]);
		for(int i=1;i<size;i++) printf(" + %d", a[i]);
	} else {
		printf("%d is NOT perfect.", n);
	}
	printf("\n");
}

int main(){
	int n;
	do{
		scanf("%d", &n);
		if(n==-1) return 0;
		dos(n);
	}while(1);
	
	return 0;
}
