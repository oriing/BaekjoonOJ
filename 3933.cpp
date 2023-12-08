#include <stdio.h>
#include <vector>

using namespace std;

vector<int> dp[2<<14+1][4];
vector<int> check[2<<14+1][4];
int dp4[2<<14+1]={};

int main(){
	for(int p=1;p<(2<<8);p++){
		int t=p*p;
		if(t>(2<<14)) break;
		
		dp[t][0].push_back(1);
		check[t][0].push_back(p);
	}
	
	for(int i=1;i<3;i++){
		for(int p=1;p<(2<<8);p++){
			int t=p*p;
			for(int k=0;k<(2<<14);k++){
				if(t+k>(2<<14)) break;
				
				for(int j=0;j<dp[k][i-1].size();j++){
					if(check[k][i-1][j] > p) break;
					
					dp[t+k][i].push_back(dp[k][i-1][j]);
					check[t+k][i].push_back(p);
				}
				
			}
		}
	}
		for(int p=1;p<(2<<8);p++){
			int t=p*p;
			for(int k=0;k<(2<<14);k++){
				if(t+k>(2<<14)) break;
				
				for(int j=0;j<dp[k][2].size();j++){
					if(check[k][2][j] > p) break;
					
					dp4[t+k] += dp[k][2][j];
				}
				
			}
		}
	
	int np;
	do{
		scanf("%d", &np);
		if(!np) break;
		int ans=0;
		for(int i=0;i<3;i++)
			for(int j=0;j<dp[np][i].size();j++)
				ans+=dp[np][i][j];
		ans += dp4[np];
		printf("%d\n", ans);
	} while(1);
	
	return 0;
}
