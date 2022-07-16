#include <stdio.h>

int d[110][110]={};
int v[110]={};
int n;

int gos(int s, int e, int c){
	int im=-1;
	v[s]=1;
	if(s==e) return c;
	for(int i=1;i<=n;i++){
		if(d[s][i]&&v[i]!=1){
			v[i]=1;
			int temp=gos(i, e, c+1);
			if(temp!=-1){
				im=temp;
				break;
			}
		}
	}
	return im;
}

int main(){
	int m, s, e, t1, t2;
	scanf("%d %d %d %d", &n, &s, &e, &m);
	for(int i=0;i<m;i++){
		scanf("%d %d", &t1, &t2);
		d[t1][t2]=d[t2][t1]=1;
	}
	printf("%d", gos(s, e, 0));
}
