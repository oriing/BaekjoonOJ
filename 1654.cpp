#include <stdio.h>

long long int k, n, a[10001], ans=0;
void sear(long long int l, long long int r){
	if(l>r) return;
	long long int mid=(l+r)/2;
	if(mid==0){
		sear(1, 1);
		return;
	}
	long long int cnt=0;
	for(int i=0;i<k;i++){
		cnt+=a[i]/mid;
	}
	if(cnt>=n) {
		if(ans<mid) ans=mid;
		sear(mid+1, r);
	}
	else sear(l, mid-1);
}

int main(){
	long long int max=-2147483648, min=2147483647;
	scanf("%lld %lld", &k, &n);
	for(int i=0;i<k;i++){
		scanf("%lld", &a[i]);
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	sear(0, max);
	printf("%lld", ans);
	
	return 0;
}
