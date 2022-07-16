#include <stdio.h>

int main(){
	int k[9]={};
	int t=1;
	
	for(int i=1;i<=8;i++) scanf("%d", &k[i]);
	for(int i=1;i<=8&&t;i++)
		if(i==k[i]) t++;
		else t=0;
	if(t){
		printf("ascending");
		return 0;
	} 
	
	t=1;
	
	for(int i=1;i<=8&&t;i++)
		if(8-i+1==k[i]) t++;
		else t=0;
	if(t){
		printf("descending");
		return 0;
	} 
	
	printf("mixed");
	
	
	return 0;
}
