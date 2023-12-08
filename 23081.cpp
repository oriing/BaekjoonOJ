#include <stdio.h>

int main(){
	int n;
	char map[510][510]={};
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", map[i]);
	}
	
	int mx=-1;
	int mpx=-1, mpy=-1, nx, ny;
	int dp[8][2]={
		{1, 0}, 
		{-1, 0}, 
		{0, 1}, 
		{0, -1}, 
		{1, 1}, 
		{1, -1}, 
		{-1, 1}, 
		{-1, -1}, 
	};
	
	for(int y=0; y<n; y++){
		for(int x=0; x<n; x++){
			if(map[y][x]!='.') continue;
			int cnt=0;
			for(int section=0; section<8; section++){
				for(int i=1;; i++){
					nx = x + i * dp[section][0];
					ny = y + i * dp[section][1];
					if(nx <  0) break;
					if(nx >= n) break;
					if(ny <  0) break;
					if(ny >= n) break;
					
					if(map[ny][nx] == 'B') cnt += i-1;
					if(map[ny][nx] != 'W') break;
				}
			}
			
			if(cnt){
				if(mx < cnt){
					mx	= cnt;
					mpx	= x;
					mpy	= y;
				}
			}
		}
	}
	
	if(mx == -1){
		printf("PASS");
	}
	else{
		printf("%d %d\n%d", mpx, mpy, mx);
	}
	
	return 0;
}
