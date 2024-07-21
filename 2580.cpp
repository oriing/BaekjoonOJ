#include <stdio.h>
#include <utility>
#include <vector>
#define X first
#define Y second

typedef std::pair<int,int> pii;

int original[11][11]={};
int answer[11][11]={};
bool box[3][3][10]={};
bool xline[11][11]={};
bool yline[11][11]={};

std::vector<pii> tar;

bool find(int now){
	if(now == tar.size()){
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				printf("%d ", answer[i][j]);
			}
			printf("\n");
		}
		return true;
	}
	
	bool cbool = false;
	
	int x = tar[now].X;
	int y = tar[now].Y;
	bool check[10]={};
	
	for(int i=1;i<=9;i++){
		check[i] = xline[x][i];
		check[i] = yline[y][i] || check[i];
		check[i] = box[x/3][y/3][i] || check[i];
	}
	for(int i=1;i<=9;i++){
		if(check[i]) continue;
//		printf("%d %d %d\n", x, y, i);
		xline[x][i]=true;
		yline[y][i]=true;
		box[x/3][y/3][i]=true;
		
		answer[x][y] = i;
		cbool = find(now+1);
		answer[x][y] = 0;
		
		xline[x][i]=false;
		yline[y][i]=false;
		box[x/3][y/3][i]=false;
		
		if(cbool) return true;
	}
	
	return cbool;
}

int main(){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			scanf("%d", &original[i][j]);
			answer[i][j] = original[i][j];
			if(original[i][j] == 0){
				tar.push_back(std::make_pair(i, j));
			}
			else{
				xline[i][original[i][j]] = true;
				yline[j][original[i][j]] = true;
				box[i/3][j/3][original[i][j]] = true;
			}
		}
	}
	
	find(0);
	
	return 0;
}
