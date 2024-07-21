#include <stdio.h>
#include <vector>
#define min(a, b) ((a)<(b) ? (a) : (b))

using namespace std;

vector<int> v[1000010];
vector<vector<int> > dp(2, vector<int>(1000010));

void makeTree(int x, int parent){
	int mx0 = 0;
	int mx1 = 0;
	for(int i=0;i<v[x].size();i++){
		if(v[x][i] != parent){
			makeTree(v[x][i], x);
			mx0 += dp[0][v[x][i]];
			mx1 += min(dp[0][v[x][i]], dp[1][v[x][i]]);
		}
	}
	
	dp[0][x] = mx1 + 1;
	dp[1][x] = mx0;
//	printf("%d : %d %d\n", x, dp[0][x], dp[1][x]);
}

int main(){
	int n, a, b;
	scanf("%d", &n);
	
	for(int i=0;i<n-1;i++){
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	makeTree(1, -1);
	
	printf("%d", min(dp[0][1], dp[1][1]));
	return 0;
}
