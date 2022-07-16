#include <stdio.h>

int n, m, b, map[501][501]={}, anst=2147483647, ansm=-2147483648;

void sear(int mid){
	int t=0, imb=b;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mid==map[i][j]) continue;
			if(mid>map[i][j]){
				t+=mid-map[i][j];
				imb-=mid-map[i][j];
			} else if(mid<map[i][j]){
				t+=2*(map[i][j]-mid);
				imb+=map[i][j]-mid;
			}
		}
	}
	if(imb<0){
		return;
	} else if(t==anst){
		if(ansm<mid){
			ansm=mid;
		}
	} else if(t<anst){
		anst=t;
		ansm=mid;
	}
}

int main(){
	int max=-2147483648;
	scanf("%d %d %d", &n, &m, &b);
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) {
		scanf("%d", &map[i][j]);
		if(map[i][j]>max) max=map[i][j];
	}
	
	for(int i=0;i<=max;i++) sear(i);
	printf("%d %d", anst, ansm);
	
	return 0;
}
