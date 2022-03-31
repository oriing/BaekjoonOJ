#include <stdio.h>
#include <stack>
#include <string.h>
using namespace std;

int main(){
	stack<int> s;
	char cmd[10]={};
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%s", cmd);
		if(!strcmp(cmd, "push")){
			int a;
			scanf("%d", &a);
			s.push(a);
		} else if(!strcmp(cmd, "pop")){
			if(s.empty()){
				printf("-1\n");
			} else {
				printf("%d\n", s.top());
				s.pop();
			}
		} else if(!strcmp(cmd, "size")){
			printf("%d\n", s.size());
		} else if(!strcmp(cmd, "empty")){
			printf("%d\n", s.empty()?1:0);
		} else if(!strcmp(cmd, "top")){
			if(s.empty()){
				printf("-1\n");
			} else {
				printf("%d\n", s.top());
			}
		}
	}
	
	return 0;
}
