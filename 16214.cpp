#include <stdio.h>

void gos(){
	long long int n, m;
	scanf("%lld %lld", &n, &m);
	long long int t, nt=n%m;
	while(1){
		t=nt;
		nt=nt*n%m;
		if(t==nt){
			printf("%d\n", nt);
			return;
		}
	}
}

int main(){
	int n; scanf("%d", &n);
	for(int t=0;t<n;t++) gos();
}
