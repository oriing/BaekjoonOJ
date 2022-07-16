#include <stdio.h>
#define abs(x) ((x)>0?(x):-(x))


int gos(int n, int k){
	int im[100010];
	int *d=im+2;
	int change=1;
	for(int i=0;i<=100001;i++) d[i]=abs(n-i);
	while(change){
		change=0;
		for(int i=0;i<=100001;i++){
			if(d[i]+1<d[i-1]){
				change=1;
				d[i-1]=d[i]+1;
			}
			if(d[i]+1<d[i+1]){
				change=1;
				d[i+1]=d[i]+1;
			}
			if(i*2>100001) continue;
			if(d[i]+1<d[i*2]){
				change=1;
				d[i*2]=d[i]+1;
			}
		}
	}
	//for(int i=5;i<18;i++) printf("%d : %d\n", i, d[i]);
	return d[k];
}

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	
	if(n==k) printf("0");
	else if(n>k) printf("%d", n-k);
	else printf("%d", gos(n, k));
	
	return 0;
}
