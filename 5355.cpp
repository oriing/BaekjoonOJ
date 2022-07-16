#include <stdio.h>
#include <string.h>

void gso(){
	char a[100];
	gets(a);
	int n=strlen(a);
	double ans=0;
	int flag=1;
	
	for(int i=0;i<n;i++){
		if(flag&&a[i]-'0'>=0&&a[i]-'0'<=9){
			ans*=10;
			ans+=a[i]-'0';
		} else if(a[i]=='.'){
			flag=0;
		} else if((!flag)&&a[i]-'0'>=0&&a[i]-'0'<=9){
			ans+=(double)(a[i]-'0')/10;
		} else if(a[i]=='@') {
			ans*=3;
		} else if(a[i]=='%'){
			ans+=5;
		} else if(a[i]=='#'){
			ans-=7;
		}
	}
	printf("%.2lf\n", ans);
	
	
}

int main(){
	int n; char a[10];
	scanf("%d", &n);
    gets(a);
	for(int i=0;i<n;i++) gso(); 
	
	return 0;
}
