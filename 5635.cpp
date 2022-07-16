#include <stdio.h>
#include <algorithm>
using namespace std;

struct peo{
	char name[16];
	int dd;
	int mm;
	int yyyy;
};

bool sos(peo a, peo b){
	if(a.yyyy!=b.yyyy) return a.yyyy<b.yyyy;
	else if(a.mm!=b.mm) return a.mm<b.mm;
	else return a.dd<b.dd;
}
int main(){
	int n;
	peo p[101];
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%s %d %d %d", p[i].name, &p[i].dd, &p[i].mm, &p[i].yyyy);
	}
	sort(p, p+n, sos);
	printf("%s\n%s", p[n-1].name, p[0].name);
	
	return 0;
}
