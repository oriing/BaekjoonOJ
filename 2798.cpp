#include <stdio.h>

int main(){
	int n, m, a[100];
	int max=0;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				int t=a[i]+a[j]+a[k];
				if(t<=m&&t>max) max=t;
				}
		}
	}
	printf("%d", max);
	
	return 0;
}
