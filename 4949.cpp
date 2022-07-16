#include <stdio.h>
#include <iostream> 
#include <stack>
#include <string.h>
using namespace std;
char a[102];

void gos(){
	stack<int> s;
	int n=strlen(a);
	for(int i=0;i<n;i++){
		if(a[i]=='('||a[i]=='['){
			s.push((a[i]=='('?')':']'));
		} else if(a[i]==')'||a[i]==']'){
			if(s.empty()){
				printf("no\n");
				return;
			}
			if(a[i]!=s.top()){
				printf("no\n");
				return;
			} else s.pop();
		}
	}
	if(s.empty()) printf("yes\n");
	else printf("no\n");
}

int main(){
	do{
		cin.getline(a, 101);
		if(a[0]=='.'&&a[1]=='\0') return 0;
		gos();
	} while(1);
	
	return 0;
}
