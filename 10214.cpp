#include <stdio.h>

void ak(){
	int ia, ib, a=0, b=0;
	for(int i=0;i<9;i++){
		scanf("%d %d", &ia, &ib);
		a+=ia;b+=ib;
	}
	if(a==b){
		printf("Draw\n");
		return;
	}
	printf("%s", a>b?"Yonsei\n":"Korea\n");
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) ak();
	
	return 0;
}
