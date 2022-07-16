#include <stdio.h>
int k, d[55];
int t[7]={};
void f(int c, int n){
	if(c==7){
		for(int i=1;i<=6;i++) printf("%d ", t[i]);
		printf("\n");
		return;
	}
	else{
		for(int i=n;i<k-(6-c);i++){
			t[c]=d[i];
			f(c+1, i+1);
		}
	}
}

int main(){
	while(1){
		scanf("%d", &k);
		if(k==0) break;
		
		for(int i=0;i<k;i++) scanf("%d", d+i);
		
		f(1, 0);
		printf("\n");
	}
	
	return 0;
}
