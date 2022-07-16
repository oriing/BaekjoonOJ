#include <stdio.h>
#include <string.h>
int main(){
	char a[200], b[200], c[3];
	
	scanf("%s %s %s", a, c, b);
	switch(c[0]){
		case '*':
			int n;
			n=strlen(a)+strlen(b);
			printf("1");
			for(int i=0;i<n-2;i++) printf("0");
			break;
		case '+':
			if(strlen(a)>strlen(b)){
				int n=strlen(a); int k=n-strlen(b);
				for(int i=0;i<n;i++){
					if(a[i]=='1'||k==i) printf("1");
					else printf("0");
				}
			} else if (strlen(a)<strlen(b)){
				int n=strlen(b); int k=n-strlen(a);
				for(int i=0;i<n;i++){
					if(k==i||b[i]=='1') printf("1");
					else printf("0");
				}
			} else {
				printf("2%s", a+1);
			}
	}
	
	return 0;
}
