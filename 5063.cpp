#include <stdio.h>

void goe(){
	int r, e, c;
	scanf("%d %d %d", &r, &e, &c);
	if(e-c==r){
		printf("does not matter\n");
	} else if(e-c<r){
		printf("do not advertise\n");
	} else printf("advertise\n");
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) goe();
	
	return 0;
}
