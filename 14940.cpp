#include <stdio.h>
#include <queue>
#include <utility>

using namespace std;

typedef pair<int,int> pii;

int 		map[1010][1010]={};
int 		ans[1010][1010]={};
int 		n, m;
queue<pii>	q;
const int	dp[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
int			imx, imy;

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d", &map[i][j]);
			if(map[i][j] == 2){
				q.push(make_pair(i, j));
			}
		}
	}
	
	while(!q.empty()){
		pii p = q.front(); q.pop();
		
		for(int i=0;i<4;i++){
			imx = p.first  + dp[i][0];
			imy = p.second + dp[i][1];
			
			if(0 > imx || imx > n || 0 > imy || imy > m){
				continue;
			}
			if(map[imx][imy] != 1) continue;
			if(ans[imx][imy] != 0) continue;
			
			ans[imx][imy] = ans[p.first][p.second] + 1;
			q.push(make_pair(imx, imy));
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(ans[i][j]==0 && map[i][j]==1) ans[i][j]=-1;
			printf("%d ", ans[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
