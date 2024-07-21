#include <stdio.h>

using namespace std;

int main(){
	int n, k, d[200100]={};
	int s=0, mx=0;
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++){
		scanf("%d", d+i);
		d[n+i]=d[i];
	}
	for(int i=0;i<k;i++) s+=d[i];
	mx = s;
	
	for(int i=0;i<n;i++){
		s -= d[i];
		s += d[i+k];
		if(s > mx) mx=s;
	}
	printf("%d", mx);
	
	return 0;
}
