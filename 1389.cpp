#include <stdio.h>

int main(){
	int n, m, a[101][101]={}, x, y, ans[101]={};
	
	for(int i=0;i<101;i++) for(int j=0;j<101;j++) if(i!=j) a[i][j]=10000;
	scanf("%d %d", &n, &m);
	
	for(int i=0;i<m;i++){
		scanf("%d %d", &x, &y);
		a[x][y]=a[y][x]=1;
	}
	
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[i][j]>a[i][k]+a[k][j]){
					a[i][j]=a[i][k]+a[k][j];
				}
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			ans[i]+=a[i][j];
		}
	}
	
	int min=2147483647, minp=-1;
	
	for(int i=1;i<=n;i++){
		if(min>ans[i]){
			min=ans[i];
			minp=i;
		}
	}
	printf("%d", minp);
	
	return 0;
}
