#include <stdio.h>

void gos(){
	int n, s, d, v[300], w[300], ans=0;
	scanf("%d %d %d", &n, &s, &d);
	for(int i=0;i<n;i++) scanf("%d %d", v+i, w+i);
	for(int i=0;i<n;i++){
		if((v[i]-1)/s+1 <= d) ans+=w[i];
	}
	printf("%d\n", ans);
}

int main(){
	int z;
	scanf("%d", &z);
	for(int i=0;i<z;i++) {
		printf("Data Set %d:\n", i+1);
		gos();
		printf("\n");
	}
}
