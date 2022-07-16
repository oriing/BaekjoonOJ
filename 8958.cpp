#include <stdio.h>
#include <string.h>
int main(){
	int pnt=0;
	char im[85];
	int tn=1, n, c;
	scanf("%d", &c);
	for(int z=0;z<c;z++){
		scanf("%s", im);
		n=strlen(im);
		tn=1;
		pnt=0;
		for(int i=0;i<n;i++){
			if(im[i]=='O'){
				pnt+=tn;
				tn++;
			} else {
				tn=1;
			}
		}
		
		printf("%d\n", pnt);
	}
	
	return 0;
}
