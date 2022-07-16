#include <stdio.h>
#define getTT(a, b) (db[b]-db[a-1])
#define get(x, y) ((x)>(y)?(getTT(y, x) -d[x]):(getTT(x, y) -d[x]))
#define regen(x) if((x)>max) max=(x)
int main(){
	int d[100010]={};
	int db[100010]={};
	int n;
	
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d", &d[i]);
		db[i]=db[i-1]+d[i];
//		printf("%d\n", db[i]);
	}
	
	int max=0;
	
	for(int i=2;i<n;i++){
//		printf("%d\n", get(1, n)-d[i]+get(i, n));
		regen(get(1, n)-d[i]+get(i, n));
	}
	for(int i=n-1;i>1;i--){
		regen(get(n, 1)-d[i]+get(i, 1));
	}
	for(int i=2;i<n;i++){
		regen(get(1, i)+get(n, i));
	}
	printf("%d", max);
	
	return 0;
}
