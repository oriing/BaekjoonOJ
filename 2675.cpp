#include <stdio.h>
#include <string.h>

int main(){
	int n, r; char s[25];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %s", &r, s);
		int t=strlen(s);
		for(int j=0;j<t;j++){
			for(int k=0;k<r;k++){
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
