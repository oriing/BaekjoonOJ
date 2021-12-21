#include <stdio.h>

int main(){
	int n; char k[50];
	int a=0, b=0;
	scanf("%d %s", &n, k);
	for(int i=0;i<n;i++){
		if(k[i]=='A') a++;
		else if(k[i]=='B') b++;
	}
	if(a!=b) printf("%s", a>b?"A":"B");
	else printf("Tie");
	return 0;
}
