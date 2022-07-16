#include <stdio.h>

int main(){
	int a[6][2]={}, n, k;
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++){
		int t, u;
		scanf("%d %d", &t, &u);
		a[u-1][t]++;
	}
	int sum=0;
	for(int i=0;i<6;i++){
		sum+=a[i][0]/k+(a[i][0]%k?1:0);
		sum+=a[i][1]/k+(a[i][1]%k?1:0);
//		printf("%d %d\n", a[i][0]/k+(a[i][0]%k?1:0), a[i][1]/k+(a[i][1]%k?1:0));
	}
	printf("%d", sum);
	
	return 0;
} 
