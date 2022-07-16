#include <stdio.h>
#include <algorithm>
using namespace std;

int d[9]={};
int dn[10]={};

void gos(int n, int m, int k, int c){
	
	for(int ii=k;ii<=n;ii++){
		int i=dn[ii];
		d[c]=i;
		if(m==c){
			for(int i=1;i<=m;i++) printf("%d ", d[i]);
			printf("\n");
		}
		else{
			gos(n, m, ii, c+1);
		}
	}
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++) scanf("%d", &dn[i]);
	sort(dn+1, dn+1+n);
	gos(n, m, 1, 1);
}
