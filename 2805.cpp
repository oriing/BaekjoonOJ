#include <stdio.h>

int n, m, a[1000001]={}, max=-2147483648, ans=0;

void find(int l, int r){
	long long int sum=0;
	int mid=(l+r)/2;
	if(l>r) return;
	
	for(int i=0;i<n;i++){
		if(a[i]-mid>0){
			sum+=(long long int)a[i]-mid;
		}
	}
	if(sum>=m){
		ans=mid;
		find(mid+1, r);
	} else {
		find(l, mid-1);
	}
}

int main(){
	
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
		if(a[i]>max){
			max=a[i];
		}
	}
	
	find(0, max);
	printf("%d", ans);
	
	return 0;
}
