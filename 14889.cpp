#include <stdio.h>
#define abs(x) ((x)>0?(x):-(x))

int n, s, d[21][21];
int t1[21], t2[21];

int f(int i, int t1n, int t2n){
	if(i==n){
		int p1=0, p2=0;
		for(int x=0;x<n;x++){
			for(int y=x+1;y<n;y++){
				if(t1[x] && t1[y]) p1+=d[x][y]+d[y][x];
				if(t2[x] && t2[y]) p2+=d[x][y]+d[y][x];
				//printf("%d %d\n", p1, p2);
			}
		}
		//printf("%d\n", p1-p2);
		//for(int i=0;i<n;i++) printf("%d ", t1[i]);
		//printf("\n");
		return abs(p1-p2);
	}
	if(t1n==n/2){
		for(int j=i;j<n;j++){
			t2[j]=1;
			t1[j]=0;
		}
		return f(n, t1n, t1n);
	}
	if(t2n==n/2){
		for(int j=i;j<n;j++){
			t1[j]=1;
			t2[j]=0;
		}
		return f(n, t2n, t2n);
	}
	t1[i]=1;
	t2[i]=0;
	int mi=f(i+1, t1n+1, t2n);
	t1[i]=0;
	t2[i]=1;
	int mi2=f(i+1, t1n, t2n+1);
	
	return mi>mi2?mi2:mi;
}

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d", &d[i][j]);
	
	printf("%d", f(0, 0, 0));
	
	return 0;
}
