#include <stdio.h>

	int n, m;
	char chess[51][55]={};
	
int printasd(int x, int y){
	int ulw=0, ulb=0;
	for(int i=x;i<x+8;i++){
		for(int j=y;j<y+8;j++){
			if(i%2==0){
				if(j%2==0){
					if(chess[i][j]=='W'){
						ulb++;
					} else {
						ulw++;
					}
				} else {
					if(chess[i][j]=='W'){
						ulw++;
					} else {
						ulb++;
					}
				}
			} else {
				if(j%2==0){
					if(chess[i][j]=='W'){
						ulw++;
					} else {
						ulb++;
					}
				} else {
					if(chess[i][j]=='W'){
						ulb++;
					} else {
						ulw++;
					}
				}
			}
		}
	}
	
	return ulb>ulw?ulw:ulb;
}

int main(){
	int minans=2147483647;
	scanf("%d %d", &m, &n);
	
	for(int i=0;i<m;i++){
		scanf("%s", chess[i]);
	}
	
	for(int i=0;i<=m-8;i++){
		for(int j=0;j<=n-8;j++){
			int imsit=printasd(i, j);
			if(imsit<minans) minans=imsit;
		}
	}
	
	
	printf("%d", minans);
	
	return 0;
}
