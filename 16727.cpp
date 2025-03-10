#include <stdio.h>

int main(){
	int aa, ba, ab, bb;
	scanf("%d %d %d %d", &aa, &ba, &bb, &ab);
	if(aa+ab == ba+bb){
		if(ab == ba) printf("Penalty");
		else printf("%s", ab>ba?"Persepolis":"Esteghlal");
	}
	else printf("%s", aa+ab>ba+bb?"Persepolis":"Esteghlal");
	
	return 0;
}
