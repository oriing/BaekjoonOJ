#include <stdio.h>
#include <string.h>
#define abs(x) ((x)>0?(x):-(x))

void gos(){
	char a[50], b[50];
	int cha[30]={}, chb[30]={};
	
	scanf("%s", a);
	scanf("%s", b);
	
	int k1 = strlen(a);
	for(int i=0;i<k1;i++){
		cha[a[i]-'a']++;
	}
	int k2 = strlen(a);
	for(int i=0;i<k2;i++){
		chb[b[i]-'a']++;
	}
	
	int ans=0;
	for(int i=0;i<26;i++) ans+=abs(cha[i]-chb[i]);
	
	printf("%d\n", ans);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++) {
		printf("Case #%d: ", i); gos();
	}
}
