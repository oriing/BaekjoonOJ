#include <stdio.h>
#include <string.h>
#include <vector>

int max(int &a, int &b){
	return a>b?a:b;
}
char a[1010], b[1010];
int dp[1010][1010]={};

int main(){
	scanf("%s %s", a, b);
	int an = strlen(a);
	int bn = strlen(b);
	
	for(int i=1;i<=an;i++){
		for(int j=1;j<=bn;j++){
			if(a[i-1]==b[j-1]) dp[i][j] = dp[i-1][j-1]+1;
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	
	int x = an, y = bn;
	std::vector<char> v;
	while(dp[x][y]){
		if(dp[x-1][y] == dp[x][y]){
			x--; continue;
		}
		if(dp[x][y-1] == dp[x][y]){
			y--; continue;
		}
		v.push_back(a[x-1]);
		x--; y--;
	}
	printf("%d\n", dp[an][bn]);
	for(int i=v.size()-1;i>=0;i--){
		printf("%c", v[i]);
	}
	
	return 0;
}
