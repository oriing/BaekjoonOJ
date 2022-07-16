#include <stdio.h>
#include <list>
using namespace std;

list<int> l;
list<int>::iterator p;
int n, k;

int mov(){
	for(int i=1;i<k;i++){
		//printf("(%d)", *p);
		p++;
		if(p==l.end()) p=l.begin();
	}
	int tem=*p;
	p=l.erase(p);
	if(p==l.end()) p=l.begin();
	return tem;
}

int main(){
	scanf("%d %d", &n, &k);
	
	for(int i=1;i<=n;i++) l.push_back(i);
	p=l.begin();
	
	printf("<");
	printf("%d", mov());
	for(int i=1;i<n;i++) printf(", %d", mov());
	printf(">");
	
	return 0;
}
