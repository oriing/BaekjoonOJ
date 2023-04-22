#include <stdio.h>

int main(){
	int w=0;
	for(int i=0;i<6;i++){
		char t[2];
		scanf("%s", t);
		if(t[0]=='W') w++;
	}
	switch(w){
		case 1: case 2:
			printf("3"); break;
		case 3: case 4:
			printf("2"); break;
		case 5: case 6:
			printf("1"); break;
		default:
			printf("-1");
	}
}
