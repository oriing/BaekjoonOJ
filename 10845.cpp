#include <stdio.h>
#include <queue>
#include <string.h>
using namespace std;

int main(){
	queue<int> s;
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
				printf("%d\n", s.front());
				s.pop();
			}
		} else if(!strcmp(cmd, "size")){
			printf("%d\n", s.size());
		} else if(!strcmp(cmd, "empty")){
			printf("%d\n", s.empty()?1:0);
		} else if(!strcmp(cmd, "front")){
			if(s.empty()){
				printf("-1\n");
			} else {
				printf("%d\n", s.front());
			}
		} else if(!strcmp(cmd, "back")){
			if(s.empty()){
				printf("-1\n");
			} else {
				printf("%d\n", s.back());
			}
		}
	}
	
	return 0;
}
