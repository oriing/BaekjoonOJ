#include <stdio.h>
#include <string.h>
int main(){
	int n; char a[51];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%s", a);
		int nt=0;int m=strlen(a);
		for(int j=0;j<m;j++){
			if(a[j]=='(') nt++;
			else if(a[j]==')'){
				nt--;
				if(nt<0) {
					printf("NO\n");
					break;
				}
			}
		}
		if(nt==0){
			printf("YES\n");
		} else if(nt>0) printf("NO\n");
	}
	return 0;
}
