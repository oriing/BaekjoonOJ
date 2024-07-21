#include <stdio.h>
#include <set>

using namespace std;

const int dp[4][2]={1, 0, 0, 1, -1, 0, 0, -1};
set<int> s;
int map[7][7]={};

void f(int x, int y, int v, int m){
	int ix, iy;
	v = v * 10 + map[x][y];
	
	if(m >= 5){
		s.insert(v);
		return;
	}
	
	for(int i=0;i<4;i++){
		ix = x + dp[i][0];
		iy = y + dp[i][1];
		
		if(0 < ix && ix < 6 && 0 < iy && iy < 6){
			f(ix, iy, v, m+1);
		}
	}
}

int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			f(i, j, 0, 0);
		}
	}
	
	printf("%d", s.size());
	
	return 0;
}
