#include <stdio.h>
#include <queue>

class Data{
public:
	int x;
	int y;
	int time;
	int othx;
	int othy;
	
	Data(): x(0), y(0), time(0) {}
	Data(int x, int y, int time, int ox, int oy): x(x), y(y), time(time), othx(ox), othy(oy) {}
};

int n, m;
char map[15][15]={};
std::queue<Data> s;
bool visited[15][15][15][15]={};

Data move(int arrow, Data d){
	int i=0, j=0, checker = 0;
	switch(arrow){
	case 1: // left 
		if(d.x == d.othx){
			if(d.y > d.othy){
				i = d.othy-1;
				while(map[d.othx][i]=='.') i--;
				if(map[d.othx][i] == 'O') return Data(-1, -1, -1, -1, -1);
				i++;
				
				j = d.y-1;
				while(map[d.x][j]=='.' && j>i) j--;
				if(map[d.x][j] == 'O') return Data(-1, -1, d.time+1, -1, -1);
				j++;
				
				return Data(d.x, j, d.time+1, d.othx, i);
			}
			else{
				j = d.y-1;
				while(map[d.x][j]=='.') j--;
				if(map[d.x][j] == 'O') {checker = 1; j=-100;};
				j++;
				
				i = d.othy-1;
				while(map[d.othx][i]=='.' && i>j) i--;
				if(map[d.othx][i] == 'O') return Data(-1, -1, -1, -1, -1);
				i++;
				
				if(checker) return Data(-1, -1, d.time+1, -1, -1);
				
				return Data(d.x, j, d.time+1, d.othx, i);
			}
		}
		
		j = d.y-1;
		while(map[d.x][j]=='.') j--;
		if(map[d.x][j] == 'O') {checker = 1; j=-100;};
		j++;
		
		i = d.othy-1;
		while(map[d.othx][i]=='.') i--;
		if(map[d.othx][i] == 'O') return Data(-1, -1, -1, -1, -1);
		i++;
		
		if(checker) return Data(-1, -1, d.time+1, -1, -1);
		
		return Data(d.x, j, d.time+1, d.othx, i);
		
		break;
		
		
		
	case 2: // right 
		if(d.x == d.othx){
			if(d.y < d.othy){
				i = d.othy+1;
				while(map[d.othx][i]=='.') i++;
				if(map[d.othx][i] == 'O') return Data(-1, -1, -1, -1, -1);
				i--;
				
				j = d.y+1;
				while(map[d.x][j]=='.' && j<i) j++;
				if(map[d.x][j] == 'O') return Data(-1, -1, d.time+1, -1, -1);
				j--;
				
				return Data(d.x, j, d.time+1, d.othx, i);
			}
			else{
				j = d.y+1;
				while(map[d.x][j]=='.') j++;
				if(map[d.x][j] == 'O') {checker = 1; j=100;}
				j--;
				
				i = d.othy+1;
				while(map[d.othx][i]=='.' && i<j) i++;
				if(map[d.othx][i] == 'O') return Data(-1, -1, -1, -1, -1);
				i--;
				
				if(checker) return Data(-1, -1, d.time+1, -1, -1);
				
				return Data(d.x, j, d.time+1, d.othx, i);
			}
		}
		
		j = d.y+1;
		while(map[d.x][j]=='.') j++;
		if(map[d.x][j] == 'O') {checker = 1; j=100;}
		j--;
		
		i = d.othy+1;
		while(map[d.othx][i]=='.') i++;
		if(map[d.othx][i] == 'O') return Data(-1, -1, -1, -1, -1);
		i--;
		
		if(checker) return Data(-1, -1, d.time+1, -1, -1);
		
		return Data(d.x, j, d.time+1, d.othx, i);
		
		break;
		
		
		
	case 3: // up 
		if(d.y == d.othy){
			if(d.x > d.othx){
				i = d.othx-1;
				while(map[i][d.othy]=='.') i--;
				if(map[i][d.othy] == 'O') return Data(-1, -1, -1, -1, -1);
				i++;
				
				j = d.x-1;
				while(map[j][d.y]=='.' && j>i) j--;
				if(map[j][d.y] == 'O') return Data(-1, -1, d.time+1, -1, -1);
				j++;
				
				return Data(j, d.y, d.time+1, i, d.othy);
			}
			else{
				j = d.x-1;
				while(map[j][d.y]=='.') j--;
				if(map[j][d.y] == 'O') {checker = 1; j=-100;}
				j++;
				
				i = d.othx-1;
				while(map[i][d.othy]=='.' && i>j) i--;
				if(map[i][d.othy] == 'O') return Data(-1, -1, -1, -1, -1);
				i++;
				
				if(checker) return Data(-1, -1, d.time+1, -1, -1);
				
				return Data(j, d.y, d.time+1, i, d.othy);
			}
		}
		
		j = d.x-1;
		while(map[j][d.y]=='.') j--;
		if(map[j][d.y] == 'O') {checker = 1; j=-100;}
		j++;
		
		i = d.othx-1;
		while(map[i][d.othy]=='.') i--;
		if(map[i][d.othy] == 'O') return Data(-1, -1, -1, -1, -1);
		i++;
		
		if(checker) return Data(-1, -1, d.time+1, -1, -1);
		
		return Data(j, d.y, d.time+1, i, d.othy);
		
		break;
		
		
		
	case 4: // down
		if(d.y == d.othy){
			if(d.x < d.othx){
				i = d.othx+1;
				while(map[i][d.othy]=='.') i++;
				if(map[i][d.othy] == 'O') return Data(-1, -1, -1, -1, -1);
				i--;
				
				j = d.x+1;
				while(map[j][d.y]=='.' && j<i) j++;
				if(map[j][d.y] == 'O') return Data(-1, -1, d.time+1, -1, -1);
				j--;
				
				return Data(j, d.y, d.time+1, i, d.othy);
			}
			else{
				j = d.x+1;
				while(map[j][d.y]=='.') j++;
				if(map[j][d.y] == 'O') {checker = 1; j=100;}
				j--;
				
				i = d.othx+1;
				while(map[i][d.othy]=='.' && i<j) i++;
				if(map[i][d.othy] == 'O') return Data(-1, -1, -1, -1, -1);
				i--;
				
				if(checker) return Data(-1, -1, d.time+1, -1, -1);
				
				return Data(j, d.y, d.time+1, i, d.othy);
			}
		}
		
		j = d.x+1;
		while(map[j][d.y]=='.') j++;
		if(map[j][d.y] == 'O') {checker = 1; j=100;}
		j--;
		
		i = d.othx+1;
		while(map[i][d.othy]=='.') i++;
		if(map[i][d.othy] == 'O') return Data(-1, -1, -1, -1, -1);
		i--;
		
		if(checker) return Data(-1, -1, d.time+1, -1, -1);
		
		return Data(j, d.y, d.time+1, i, d.othy);
		
		break;
		
		
		
	}
}

int main(){
	int spx, spy, othx, othy;
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++){
		scanf("%s", &map[i][1]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(map[i][j] == 'R'){
				spx = i;
				spy = j;
				map[i][j] = '.';
			}
			if(map[i][j] == 'B'){
				othx = i;
				othy = j;
				map[i][j] = '.';
			}
		}
	}
	
	s.push(Data(spx, spy, 0, othx, othy));
	visited[spx][spy][othx][othy] = true;
	while(!s.empty()){
		Data now = s.front(); s.pop();
//		printf("%d %d %d %d %d\n", now.x, now.y, now.time, now.othx, now.othy);
		if(now.x == -1){
			printf("%d\n", now.time);
			return 0;
		}
		if(now.time > 10) break;
		
		for(int i=1;i<=4;i++){
			Data next = move(i, now);
			if(next.x == -1){
				if(next.time == -1) continue;
				s.push(next);
				continue;
			}
			if(visited[next.x][next.y][next.othx][next.othy]) continue;
			visited[next.x][next.y][next.othx][next.othy] = true;
			s.push(next);
		}
	}
	printf("-1");
	
	return 0;
}
