#include <stdio.h>
int main(){
	char d[110];
	scanf("%s", d);
	
	for(int i='a';i<='z';i++){
		int c=0;
		for(int j=0;d[j]!=0;j++){
//			printf("%d/%d\n", d[j], i);
			if(d[j]==i) c++;
		}
		printf("%d ", c);
	}
	
	return 0;
}
