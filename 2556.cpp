#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i,j,k=0;
	int check=0;
	scanf("%d",&check);
	
	for(i=0;i<check;i++){
		for(j=0;j<check;j++)
			printf("*");
		
		printf("\n");
	}
	
  return 0;
}
