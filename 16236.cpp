#include <stdio.h>
#include <string.h>
#include <queue>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int n, d[23][23], x, y, ti=0, sh=2, eats=0;

int mov[4][2]={-1, 0, 0, -1, 0, 1, 1, 0};

struct fish{
	int x;
	int y;
	int t;
};

struct cmp{
	bool operator()(fish &a, fish &b){
		if(a.t == b.t){
			if(a.x == b.x){
				return a.y>b.y;
			}
			return a.x>b.x;
		}
		return a.t>b.t;
	}
};

void getFish(){
	int dp[23][23]={};
	priority_queue<fish, vector<fish>, cmp> q;
	
	q.push((fish){x, y, 0});
	dp[x][y]=1;
	
	while(!q.empty()){
		int a, b, tn;
		fish tem=q.top();
		a=tem.x;
		b=tem.y;
		tn=tem.t;
		
		q.pop();
		
		if(d[a][b]){
			if(d[a][b]<sh){
				eats++;
				if(eats==sh){
					eats=0;
					sh++;
				}
				d[a][b]=0;
				x=a; y=b;
				ti+=tn;
				return;
			}
			if(d[a][b]>sh) continue;
		}
		
		for(int i=0;i<4;i++){
			int na=a+mov[i][0], nb=b+mov[i][1];
			if(0==dp[na][nb] && na>0 && na<=n && nb>0 && nb<=n && d[na][nb]<=sh){
				q.push((fish){na, nb, tn+1});
				dp[na][nb]=1;
			}
		}
	}
	printf("%d", ti);
	exit(0);
}

int main(){
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d", &d[i][j]);
			if(d[i][j]==9){
				x=i;y=j;
				d[i][j]=0;
			}
		}
	}
	
	while(1){
		getFish();
	}
}
