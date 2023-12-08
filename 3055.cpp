#include <stdio.h>

int main(){
	int n, m, tx, ty, dchv[55][55]={};
	char d[55][55]={};
	const int dp[4][2]={1, 0, 0, 1, -1, 0, 0, -1};
	
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++){
		scanf("%s", &d[i][1]);
	}
	
	for(int time=0;;time++){
		int chv=0;
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(d[i][j]=='S' && dchv[i][j]==time){
					dchv[i][j] = -1;
					for(int k=0;k<4;k++){
						tx = i+dp[k][0];
						ty = j+dp[k][1];
						
						if(d[tx][ty]=='D'){
							printf("%d", time+1);
							return 0;
						}
						
						if(d[tx][ty]=='.' && !dchv[tx][ty]){
							chv			= 1;
							dchv[tx][ty]= time+1;
							d[tx][ty]	= 'S';
						}
					}
				}
			}
		}
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(d[i][j]=='*' && dchv[i][j]==time){
					dchv[i][j] = -1;
					
					for(int k=0;k<4;k++){
						tx = i+dp[k][0];
						ty = j+dp[k][1];
						
						if((d[tx][ty]=='.' && !dchv[tx][ty]) || d[tx][ty]=='S'){
//							chv			= 1;
							dchv[tx][ty]= time+1;
							d[tx][ty]	= '*';
						}
					}
				}
			}
		}
		
		
		if(!chv) break;
	}
	
	printf("KAKTUS");
	
	return 0;
}
