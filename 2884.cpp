#include <stdio.h>

int main(){
	int h, m;
	scanf("%d %d", &h, &m);
	
	h+=24;
	m+=60;
	m-=45;
	h-=-(m/60)+1;
	printf("%d %d", h%24, m%60);
	
	return 0;
}
