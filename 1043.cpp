#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int n, m, np, party[60][60]={}, know[60]={}, ans=0, nParty[60], temp;
vector<int> map[60];

void findKnow(int start){
	queue<int> q;
	int visit[60]={};
	q.push(start);
	visit[start]=1;
	while(!q.empty()){
		int k=q.front(); q.pop();
		
		for(int i=0;i<map[k].size();i++){
			know[map[k][i]]=1;
			if(!visit[map[k][i]]){
				q.push(map[k][i]);
				visit[map[k][i]]=1;
			}
		}
	}
}

int main(){
	int mapTemp[60][60]={};
	
	scanf("%d %d %d", &n, &m, &np);
	for(int i=0;i<np;i++){
		scanf("%d", &temp);
		know[temp]=1;
	}
	for(int i=0;i<m;i++){
		scanf("%d", &nParty[i]);
		for(int j=0;j<nParty[i];j++){
			scanf("%d", &party[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<nParty[i];j++){
			for(int k=0;k<nParty[i];k++){
				mapTemp[party[i][j]][party[i][k]]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(mapTemp[i][j]) map[i].push_back(j);
		}
	}
	
	for(int i=1;i<=n;i++){
		if(know[i]){
			findKnow(i);
		}
	}
	
	for(int i=0;i<m;i++){
		int check=1;
		for(int j=0;j<nParty[i];j++){
			if(know[party[i][j]]){
				check=0;
				break;
			}
		}
		if(check)ans++;
	}
	
	printf("%d", ans);
	
	
	return 0;
}
