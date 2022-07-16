#include <stdio.h>

int d[110][110]={};
int n;

int main(){
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &d[i][j]);
		}
	}
//	for(int i=0;i<n;i++) d[i][i]=1;
	for(int x=0;x<n;x++)
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				for(int k=0;k<n;k++){
					if(2<=d[i][j]+d[j][k]) d[i][k]=1;
				}
			}
		}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(d[i][j]) printf("1 ");
			else printf("0 ");
		}
		printf("\n");
	}
	
	return 0;
}

