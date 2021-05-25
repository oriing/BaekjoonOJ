#include <stdio.h>
#include <algorithm>

using namespace std;

struct person{
	int age;
	char name[101]={};
}; 

bool sos(person a, person b){
	return a.age<b.age;
}

int main(){
	int n; person p[100001];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %s", &p[i].age, p[i].name);
	}
	stable_sort(p, p+n, sos);
	
	for(int i=0;i<n;i++){
		printf("%d %s\n", p[i].age, p[i].name);
	}
	
	return 0;
}
