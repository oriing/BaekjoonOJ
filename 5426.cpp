#include <stdio.h>
#include <string.h>

using namespace std;
char d[10100]={};

char getArr(int s, int x, int y){
	return d[x+y*s];
}
int getVal(int x){
	for(int i=1;i<=100;i++){
		if(i*i==x) return i;
	}
	return 0;
}

void gos(){
	scanf("%s", d);
	int n = getVal(strlen(d));
	
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<n;j++){
			printf("%c", getArr(n, i, j));
		}
	}
	printf("\n");
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) gos();
	
	return 0;
}
