#include <stdio.h>

int d[17]={};
int n;

int gos(int x){
	int ans=0;
	if(x>n){
//		for(int i=1;i<=n;i++)printf("%d ", d[i]);
//		printf("\n");
		return 1;
	}
	for(int i=1;i<=n;i++){
		int ch=0;
		for(int j=1;j<x;j++){
			if(d[j]+(x-j)==i||d[j]-(x-j)==i||d[j]==i){
				ch=1;
				break;
			}
		}
		if(ch) continue;
		
		d[x]=i;
		ans+=gos(x+1);
	}
	return ans;
}

int main(){
	scanf("%d", &n);
	printf("%d", gos(1));
}
