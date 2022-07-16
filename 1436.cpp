#include <stdio.h>

int main(){
	int i, cnt=0, t;
	scanf("%d", &t);
	for(i=666;cnt!=t;i++){
		int temp=i;
		while(temp>=666){
			if(temp%1000==666){
				cnt++;
				break;
			} else temp/=10;
		}
	}
	printf("%d", i-1);
	return 0;
}
