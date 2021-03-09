#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <vector>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

using namespace std;
    int n, hpw, M[2000], m[2000], a[101][101], cnt[101], visited[101];

void big(int now, int s){
	visited[s]=1;
	for(int i=1;i<=n;i++){
		if(a[s][i]==1&&visited[i]==0){
			cnt[now]++;
			big(now, i);
		}
	}
}
void sma(int now, int s){
	visited[s]=1;
	for(int i=1;i<=n;i++){
		if(a[i][s]==1&&visited[i]==0){
			cnt[now]++;
			sma(now, i);
		}
	}
}

int main(){
	scanf("%d %d", &n, &hpw);
	for(int i=0;i<hpw;i++){
		scanf("%d %d", &M[i], &m[i]);
		a[M[i]][m[i]]=1;
	}
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++) visited[j]=0; 
		big(i, i);
		sma(i, i);
	}
    
    for(int i=1;i<=n;i++){
    	printf("%d\n", n-1-cnt[i]);
	}
    
    return 0;
}

