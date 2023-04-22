#include <stdio.h>
#include <string.h>
void gos(){
	char a[200], b[200];
	scanf("%s %s", a, b);
	int na=strlen(a), nb=strlen(b);
	if(na!=nb){
		printf("ERROR\n");
		return;
	}
	int k=0;
	for(int i=0;i<na;i++){
		if(a[i]!=b[i]) k++;
	}
	if(k) printf("ERROR\n");
	else printf("OK\n");
}

int main(){
	int z;
	scanf("%d", &z);
	for(int i=0;i<z;i++) gos();
}
