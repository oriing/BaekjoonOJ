#include <stdio.h>
#include <vector>

using namespace std;

vector<int> v[100010];
//vector<int> tree(100010, -1);
vector<int> dp(100010, 1);

int makeTree(int x, int parent){
//	tree[x] = parent;
	for(int i=0;i<v[x].size();i++){
		if(v[x][i] != parent){
			dp[x] += makeTree(v[x][i], x);
		}
	}
	return dp[x];
}

int main(){
	int n, r, q, a, b;
	scanf("%d %d %d", &n, &r, &q);
	
	for(int i=0;i<n-1;i++){
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	makeTree(r, 0);
	
	for(int i=0;i<q;i++){
		scanf("%d", &a);
		printf("%d\n", dp[a]);
	}
	
	return 0;
}
