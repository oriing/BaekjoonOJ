#include <stdio.h>

const int mod = 1000000009;
int d[100010][3]={{0,0,0}, {1, 0, 0}, {0, 1, 0}, {1, 1, 1}};
int dxs = 4;
int find(){
	int n;
	scanf("%d", &n);
	for(int i=dxs;i<=n;i++){
		d[i][0] = d[i-1][1] + d[i-1][2]; d[i][0] %= mod;
		d[i][1] = d[i-2][0] + d[i-2][2]; d[i][1] %= mod;
		d[i][2] = d[i-3][0] + d[i-3][1]; d[i][2] %= mod;
	}
	if(dxs <= n) dxs = n+1;
	
	printf("%d\n", ((d[n][0]+d[n][1])%mod+d[n][2])%mod);
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--) find();
	return 0;
}
