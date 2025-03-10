#include <stdio.h>
#include <string.h>

int main(){
	int time = 0;
	char a[20];
	scanf("%s", a);

	for(int i = 0; i < strlen(a); i++){
		if(a[i]=='A' || a[i]=='B' || a[i]=='C'){
			time+=3;
		}
		if(a[i]=='D' || a[i]=='E' || a[i]=='F'){
			time+=4;
		}
		if(a[i]=='G' || a[i]=='H' || a[i]=='I'){
			time+=5;
		}
		if(a[i]=='J' || a[i]=='K' || a[i]=='L'){
			time+=6;
		}
		if(a[i]=='M' || a[i]=='N' || a[i]=='O'){
			time+=7;
		}
		if(a[i]=='P' || a[i] =='Q' || a[i]=='R' || a[i]=='S'){
			time+=8;
		}
		if(a[i]=='T' || a[i]=='U' || a[i]=='V'){
			time+=9;
		}
		if(a[i]=='W' || a[i]=='X' || a[i]=='Y' || a[i]=='Z'){
			time+=10;
		}
	}

	printf("%d", time);
	return 0;
}
