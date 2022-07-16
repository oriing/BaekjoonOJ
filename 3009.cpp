#include <stdio.h>

int main(){
	int a[4][2], t[1001][2]={};
	for(int i=0;i<3;i++) {
		scanf("%d %d", &a[i][0], &a[i][1]);
		t[a[i][0]][0]++;
		t[a[i][1]][1]++;
	}
	for(int i=0;i<=1000;i++){
		if(t[i][0]==1){
			printf("%d ", i);
		}
	}
	
	for(int i=0;i<=1000;i++){
		if(t[i][1]==1){
			printf("%d", i);
		}
	}
	
	return 0;
}
