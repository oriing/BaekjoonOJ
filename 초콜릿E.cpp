#include <bits/stdc++.h>
using namespace std;

int n;
char d[50][50]={};
int dp[4][2]={0, 1, 1, 0, 0, -1, -1, 0}, tx, ty;
int visited[50][50]={};

void gos(int x, int y){
	for(int i=0;i<4;i++){
		tx = x+dp[i][0];
		ty = y+dp[i][1];
		
		if(!visited[tx][ty] && d[tx][ty] == '#'){
			visited[tx][ty] = 1;
			gos(tx, ty);
		}
	}
}

int check(int x, int y){
	memset(visited, 0, sizeof(visited));
	int cnt = 0, tmp;
	
	d[x][y] = '.';
	for(int i=0;i<4;i++){
		tx = x+dp[i][0];
		ty = y+dp[i][1];
		if(d[tx][ty]!='#') continue;
		if(!visited[tx][ty]){
			cnt++;
			if(cnt>=2){
				d[x][y] = '#';
				return 1;
			}
			gos(tx, ty);
		}
	}
	d[x][y] = '#';
	
	return 0;
}

int cnter(int x, int y){
	int cnt=0;
	for(int i=0;i<4;i++){
		if(d[x+dp[i][0]][y+dp[i][1]] == '#') cnt++;
	}
	return cnt;
}

int main(){
	vector<pair<int,int> > v;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%s", &d[i][1]);
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(d[i][j] == '#'){
				if(check(i, j)==0){
					int checker=1;
					d[i][j] = '.';
					for(int ii=1;ii<=n && checker;ii++){
						for(int jj=1;jj<=n && checker;jj++){
							if(d[ii][jj] != '#') continue;
							if(cnter(ii, jj)<2) continue;
							if(check(ii, jj)==0){
								checker=0;
							}
						}
					}
					d[i][j] = '#';
					if(checker){
						v.push_back(make_pair(i, j));
					}
				}
			}
		}
	}
	
	printf("%d\n", v.size());
	for(int i=0;i<v.size();i++){
		printf("%d %d\n", v[i].first, v[i].second);
	}
	
	return 0;
}
