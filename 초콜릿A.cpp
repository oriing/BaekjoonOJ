#include <bits/stdc++.h>

int gos(){
	int a=0, b=0, n=0, bo=0;
	char s[100];
	scanf("%s", s);
	int l = strlen(s);
	
	for(int i=0;i<l;i++){
		if(s[i]=='!'){
			if(!bo){
				a++;
			} else{
				b++;
			}
		}
		else if('0'<=s[i] && s[i]<='9'){
			n*=10;
			n+=s[i]-'0';
			bo=1;
		}
	}
	if(b){
		n = 1;
	}
	if(a){
		if(a%2==1) n = !n;
	}
	printf("%d\n", n);
	
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)gos();
	
	return 0;
}
