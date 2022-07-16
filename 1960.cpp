#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

typedef pair<int,int> pii;

struct compare {
	bool operator()(pii a, pii b) {
		return a.second>b.second;
	}
};
priority_queue<pii, vector<pii>, compare> x, y;
d[800][800]={};

void gos(pii tx, pii ty){
	if(x.empty() && y.empty()){
		printf("-1");
		exit(0);
	}
	if(d[tx.first][ty.first]){
		if(tx.second>ty.second){
			pii tty=make_pair(y.top().first, y.top().second); y.pop();
			gos(tx, tty);
			tty.second--;
			if(tty.second>0) y.push(tty);
		} else{
			pii ttx=make_pair(x.top().first, x.top().second); x.pop();
			gos(tx)
			ttx.second--; 
			if(ttx.second>0) x.push(ttx);
		}
	}
}

int main(){
	int	n;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		int t;
		scanf("%d", &t);
		x.push(make_pair(i, t));
	}
	for(int i=0;i<n;i++){
		int t;
		scanf("%d", &t);
		y.push(make_pair(i, t));
	}
	
	while(!x.empty() !&& y.empty()){
		pii tx=make_pair(x.top().first, x.top().second); x.pop();
		pii ty=make_pair(y.top().first, y.top().second); y.pop();
		int te=gos(tx, ty);
		if(te%2==0) tx.second--; if(te%3==0) ty.second--;
		if(tx.second>0) x.push(tx);
		if(ty.second>0) y.push(ty);
		
	}
	
	if(x.empty() && y.empty()){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d", d[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("-1");
	}
	
	return 0;
}
