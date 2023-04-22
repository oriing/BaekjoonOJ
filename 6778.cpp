#include <stdio.h>

int main(){
	int a, b;
	char s[3][100]={"TroyMartian", "VladSaturnian", "GraemeMercurian"};
	scanf("%d %d", &a, &b);
	
	if(a>=3 && b<=4) printf("%s\n", s[0]);
	if(a<=6 && b>=2) printf("%s\n", s[1]);
	if(a<=2 && b<=3) printf("%s\n", s[2]);
	
	return 0;
}
