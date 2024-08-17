#include <stdio.h>
#include <algorithm>

int abs(int x){
	return x>=0?x:-x;
}

int n, d[100010]={};

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", d+i);
	}
	
	std::sort(d, d+n);
	int mi = 2147483647, now;
	int p1=0, p2=n-1;
	while(p1<p2){
		now = d[p2]+d[p1];
//		printf("%d %d %d\n", now, d[p1], d[p2]);
		if(abs(mi) > abs(now)) mi = now;
		if(now > 0) p2--;
		else if(now < 0) p1++;
		else{
			printf("0");
			return 0;
		}
	}
	printf("%d", mi);
	
	return 0;
}
