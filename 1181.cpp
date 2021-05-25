#include <stdio.h>
#include <string.h>
#include <algorithm>

struct word{
	int len;
	char wo[51]={};
	bool cans;
};

bool sos(word a, word b){
	if(a.len==b.len){
		for(int i=0;i<a.len;i++){
			if(a.wo[i]!=b.wo[i]){
				return a.wo[i]<b.wo[i];
			}
		}
	} else {
		return a.len<b.len;
	}
}

int main(){
	int n;
	word a[20001];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%s", a[i].wo);
		a[i].len=strlen(a[i].wo);
		a[i].cans=true;
		for(int j=0;j<i;j++){
			if(a[i].len!=a[j].len) continue;
			if(!strcmp(a[i].wo, a[j].wo)) {
				a[i].cans=false;
				break;
			}
		}
	}
	std::sort(a, a+n, sos);
	for(int i=0;i<n;i++){
		if(a[i].cans){
			printf("%s\n", a[i].wo);
		}
	}
	
	return 0;
}
