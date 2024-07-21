#include <stdio.h>
#include <vector>
#include <algorithm>
#define max(a, b) ((a)>(b) ? (a) : (b))

using namespace std;

vector<int> v[10010];
vector<int> peo(1);
vector<vector<int> > dp(2, vector<int>(10010));
vector<vector<vector<int> > > selected(2, vector<vector<int> >(10010));

vector<int> operator+(vector<int> &a, vector<int> &b){
	vector<int> tmp;
	for(int &i : a){
		tmp.push_back(i);
	}
	for(int &i : b){
		tmp.push_back(i);
	}
	return tmp;
}

void makeTree(int x, int parent){
	int mx0 = 0;
	int mx1 = 0;
	for(int i=0;i<v[x].size();i++){
		if(v[x][i] != parent){
			makeTree(v[x][i], x);
			
			mx0 += dp[0][v[x][i]];
			selected[1][x] = selected[1][x] + selected[0][v[x][i]];
			
			if(dp[0][v[x][i]] > dp[1][v[x][i]]){
				mx1 += dp[0][v[x][i]];
				selected[0][x] = selected[0][x] + selected[0][v[x][i]];
			}
			else{
				mx1 += dp[1][v[x][i]];
				selected[0][x] = selected[0][x] + selected[1][v[x][i]];
			}
		}
	}
	
	dp[0][x] = mx1;
	dp[1][x] = mx0 + peo[x];
	selected[1][x].push_back(x);
//	printf("%d : %d %d\n", x, dp[0][x], dp[1][x]);
}

int main(){
	int n, a, b;
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%d", &a);
		peo.push_back(a);
	}
	
	for(int i=0;i<n-1;i++){
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	makeTree(1, -1);
	if(dp[0][1] > dp[1][1]){
		printf("%d\n", dp[0][1]);
		sort(selected[0][1].begin(), selected[0][1].end());
		for(int &i : selected[0][1]){
			printf("%d ", i);
		}
	}
	else{
		printf("%d\n", dp[1][1]);
		sort(selected[1][1].begin(), selected[1][1].end());
		for(int &i : selected[1][1]){
			printf("%d ", i);
		}
	}
	return 0;
}
