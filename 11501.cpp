#include <stdio.h>
int n;
int d[1000001];
int mx;

void gos(){
	long long int ans=0;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d", &d[i]);
	
	mx = d[n-1];
	for(int i=n-2;i>=0;i--){
		if(mx<d[i]){
			mx=d[i];
		}
		else{
			ans += mx-d[i];
		}
	}
	printf("%lld\n", ans);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) gos();
	
	return 0;
}
