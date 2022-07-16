#include <stdio.h>

int main(){
	int n, k;
	int a[10]={};
	int sum=0;
	int ans=0;
	
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++){
		scanf("%d", a+i);
	}
	sum=k;
	for(int i=n-1;i>=0;i--){
		if(sum<a[i]) continue;
		ans+=sum/a[i];
		sum=sum%a[i];
	}
	printf("%d", ans);
	
	return 0;
}
