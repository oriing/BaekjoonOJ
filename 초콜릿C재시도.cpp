#include <bits/stdc++.h>
#define nextpos(x, y) ( ((x)==n) ? ( ((y)==m) ? 0 : find(1, y+1) ) : find(x+1, y))


int n, m, a, b;
int map[55][55]={};

void setmap(int x, int y, int v){
	if(x<1 || x>n) return;
	if(y<1 || y>m) return;
	map[x][y] += v;
}

int find(int x, int y){
//	printf("%d %d\n", x, y);
	if(map[x][y]){
		return nextpos(x, y);
	}
	
	int mx = nextpos(x, y);
	
	setmap(x, y, 1);
	setmap(x+a, y+b, 1);
	setmap(x+a, y-b, 1);
	setmap(x-a, y+b, 1);
	setmap(x-a, y-b, 1);
	
	mx = std::max(mx, nextpos(x, y))+1;
	
	setmap(x, y, -1);
	setmap(x+a, y+b, -1);
	setmap(x+a, y-b, -1);
	setmap(x-a, y+b, -1);
	setmap(x-a, y-b, -1);
	
	return mx;
}

void gos(){
	scanf("%d %d %d %d", &n, &m, &a, &b);
	
	printf("%d\n", find(1, 1));
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)gos();
	
	return 0;
}
