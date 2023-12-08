#include <stdio.h>

int main(){
	int n, t, cnt=0, mx=0;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &t);
		if(t){
			cnt++;
			if(cnt>mx) mx=cnt;
		}
		else{
			cnt=0;
		}
	}
	printf("%d", mx);
	
	return 0;
}
