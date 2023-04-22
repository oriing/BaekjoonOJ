#include <stdio.h>

int main(){
	int d[4];
	for(int i=0;i<4;i++) scanf("%d", &d[i]);
	
	for(int i=1;i<4;i++){
		if(!(d[i]>d[i-1])) break;
		if(i==3){
			printf("Fish Rising");
			return 0;
		}
	}
	for(int i=1;i<4;i++){
		if(!(d[i]<d[i-1])) break;
		if(i==3){
			printf("Fish Diving");
			return 0;
		}
	}
	for(int i=1;i<4;i++){
		if(!(d[i]==d[i-1])) break;
		if(i==3){
			printf("Fish At Constant Depth");
			return 0;
		}
	}
	printf("No Fish");
	return 0;
}
