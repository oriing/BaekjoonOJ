#include <bits/stdc++.h>
#define NT(x) ((x)==1 ? 2 : 1)

int n, map[200100][3]={};
void gos(){
	int sm = 0;
	int sx, sy, ex, ey;
	
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d", &map[i][1]);
	}
	for(int i=1;i<=n;i++){
		scanf("%d", &map[i][2]);
	}
	scanf("%d %d %d %d", &sx, &sy, &ex, &ey);
	
	sm += map[sx][sy] + map[ex][ey];
	
	if(sx > ex){
		std::swap(sx, ex);
		std::swap(sy, ey);
	}
	
	if(sx!=ex){
		int tmpx=map[sx][NT(sy)];
		int tmp=map[sx][NT(sy)];
		for(int i=sx-1;i>=1;i--){
			tmpx = std::max(tmpx, tmp+map[i][1]);
			tmpx = std::max(tmpx, tmp+map[i][2]);
			tmpx = std::max(tmpx, tmp+map[i][1]+map[i][2]);
			tmp += map[i][1]+map[i][2];
		}
		if(tmpx>0) sm += tmpx;
		
		tmpx=map[ex][NT(ey)];
		tmp=map[ex][NT(ey)];
		for(int i=ex+1;i<=n;i++){
			tmpx = std::max(tmpx, tmp+map[i][1]);
			tmpx = std::max(tmpx, tmp+map[i][2]);
			tmpx = std::max(tmpx, tmp+map[i][1]+map[i][2]);
			tmp += map[i][1]+map[i][2];
		}
		if(tmpx>0) sm += tmpx;
		
		for(int i=sx+1;i<ex;i++){
			tmp = map[i][1] + map[i][2];
			tmp = std::max(map[i][1], tmp);
			tmp = std::max(map[i][2], tmp);
			sm += tmp;
		}
	}
	
	else{
		int tmpx=map[sx][1]+map[sx][2];
		int tmp=map[sx][1]+map[sx][2];
		for(int i=sx-1;i>=1;i--){
			tmpx = std::max(tmpx, tmp+map[i][1]);
			tmpx = std::max(tmpx, tmp+map[i][2]);
			tmpx = std::max(tmpx, tmp+map[i][1]+map[i][2]);
			tmp += map[i][1]+map[i][2];
		}
		sm = std::max(tmpx, sm);
		
		tmpx=map[sx][1]+map[sx][2];
		tmp=map[sx][1]+map[sx][2];
		for(int i=ex+1;i<=n;i++){
			tmpx = std::max(tmpx, tmp+map[i][1]);
			tmpx = std::max(tmpx, tmp+map[i][2]);
			tmpx = std::max(tmpx, tmp+map[i][1]+map[i][2]);
			tmp += map[i][1]+map[i][2];
		}
		sm = std::max(tmpx, sm);
	}
	
	printf("%d\n", sm);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) gos();
	
	return 0;
}
