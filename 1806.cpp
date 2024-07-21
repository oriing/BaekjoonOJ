#include <stdio.h>

int main(){
	int n, s, d[100100];
	scanf("%d %d", &n, &s);
	int mi=2147483647, sum=0, l=0, r=0;
	for(int i=0;i<n;i++) scanf("%d", d+i);
	
	while(n>=r){
		if(sum<s){
			sum += d[r];
			r++;
		}
		else{
			if(r-l < mi) mi=r-l;
			sum -= d[l];
			l++;
		}
	}
	
	if(mi == 2147483647) printf("0");
	else printf("%d", mi);
	
	return 0;
}
