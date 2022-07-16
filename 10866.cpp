#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;

int main(){
	vector<int> v;
	char cmd[15]={};
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%s", cmd);
		if(!strcmp(cmd, "push_front")){
			int a, temp;
			scanf("%d", &a);
			v.push_back(1);
			for(int i=v.size()-2;i>=0;i--){
				temp=v[i];
				v[i]=v[i+1];
				v[i+1]=temp;
			}
			v[0]=a;
		} else if(!strcmp(cmd, "push_back")){
			int a;
			scanf("%d", &a);
			v.push_back(a);
		} else if(!strcmp(cmd, "pop_front")){
			if(v.empty()){
				printf("-1\n");
			} else {
				int temp;
				printf("%d\n", v.front());
				for(int i=0;i<v.size()-1;i++){
					temp=v[i];
					v[i]=v[i+1];
					v[i+1]=temp;
				}
				v.pop_back();
			}
		} else if(!strcmp(cmd, "pop_back")){
			if(v.empty()){
				printf("-1\n");
			} else {
				printf("%d\n", v.back());
				v.pop_back();
			}
		} else if(!strcmp(cmd, "size")){
			printf("%d\n", v.size());
		} else if(!strcmp(cmd, "empty")){
			printf("%d\n", v.empty()?1:0);
		} else if(!strcmp(cmd, "front")){
			if(v.empty()){
				printf("-1\n");
			} else {
				printf("%d\n", v.front());
			}
		} else if(!strcmp(cmd, "back")){
			if(v.empty()){
				printf("-1\n");
			} else {
				printf("%d\n", v.back());
			}
		}
	}
	
	return 0;
}
