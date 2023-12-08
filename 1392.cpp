#include <stdio.h>

int main(){
	int d[101]={};
	int n, q, t;
	
	scanf("%d %d", &n, &q);
	
	for(int i=1;i<=n;i++){
		scanf("%d", &d[i]);
		d[i]+=d[i-1];
	}
	
	for(int i=0;i<q;i++){
		scanf("%d", &t);
		
		for(int j=1;j<=n;j++){
			if(d[j]>t){
				printf("%d\n", j);
				break;
			}
		}
	}
	
	return 0;
}
