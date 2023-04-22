#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#define min(x, y) ((x)>(y)?(y):(x))
using namespace std;
int main(){
	int n, d[1000100], nd[2]={};
	pair<int, int> a[1000100];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &d[i]);
		a[i].first=d[i];
		a[i].second=d[i]%2;
		nd[d[i]%2]++;
	}
	
	if(nd[0]==0 || nd[1]==0){
		printf("0");
		exit(0);
	}

	//0 1

	long long int c1=0, c2=0, p=0;
	for(int i=0;i<n;i++){
		if(a[i].second==0){
			c1+=i-p;
			p++;
		}
	}

	//1 0
	p=0;
	for(int i=0;i<n;i++){
		if(a[i].second==1){
			c2+=i-p;
			p++;
		}
	}
	
	printf("%lld", min(c1, c2));
	
	return 0;
}
