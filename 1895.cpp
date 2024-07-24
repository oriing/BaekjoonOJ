#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;
const int dp[9][2]={
	0, 1,
	1, 0,
	0, -1,
	-1, 0,
	1, 1,
	-1, -1,
	1, -1,
	-1, 1,
	0, 0
}
;
int d[50][50]={};
int find(int x, int y){
	vector<int> v;
	for(int i=0;i<9;i++){
		v.push_back(d[x+dp[i][0]][y+dp[i][1]]);
	}
	sort(v.begin(), v.end());
	return v[4];
}

int main(){
	int n, m;
	int k, ans=0;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &d[i][j]);
		}
	}
	scanf("%d", &k);
	
	for(int i=1;i<n-1;i++){
		for(int j=1;j<m-1;j++){
			if(find(i, j) >= k) ans++;
		}
	}
	printf("%d", ans);
	
	return 0;
} 
