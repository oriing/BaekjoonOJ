#include <stdio.h>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
	return a>b;
}
int max(int a, int b){
	return a>b?a:b;
}
int min(int a, int b){
	return a>b?b:a;
}
int d[500010];
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", d+i);
	}
	sort(d, d+n, cmp);
	
	int ans = 0;
	for(int i=0;i<n;i++){
		if(!d[i]) break;
		ans = max(ans, d[i]+i);
	}
	printf("%d", min(ans, n));
	
	return 0;
}
