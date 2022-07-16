#include <stdio.h>
#include <algorithm>
using namespace std;

int d[9]={};
int dn[10]={};

void gos(int n, int m, int c){
	
	for(int ii=1;ii<=n;ii++){
		int i=dn[ii];
		d[c]=i;
		if(m==c){
			for(int j=1;j<=m;j++) printf("%d ", d[j]);
			printf("\n");
		}
		else{
			gos(n, m, c+1);
		}
	}
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++) scanf("%d", &dn[i]);
	sort(dn+1, dn+1+n);
	gos(n, m, 1);
}
