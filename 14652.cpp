#include <stdio.h>

int main(){
	int n, m, a, cnt=0;
	scanf("%d %d %d", &n, &m, &a);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(cnt==a){
				printf("%d %d", i, j);
			}
			cnt++;
		}
	}
	
	return 0;
}
