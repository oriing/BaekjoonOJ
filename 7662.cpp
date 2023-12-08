#include <stdio.h>
#include <string.h>
#include <functional>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int d[1000011]={}, ina[1000011];
char inw[1000011][3];
int sizee, start;

priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > mind;
priority_queue<pair<int,int>, vector<pair<int,int> >, less<pair<int,int> > > maxd;

pair<int,int> getMin(){
	while(d[mind.top().second]==0) mind.pop();
	return mind.top();
}
pair<int,int> getMax(){
	while(d[maxd.top().second]==0) maxd.pop();
	return maxd.top();
}

void gos(){
	int n, a, tes=0;
	scanf("%d", &n);
	sizee=0;start=0;
	memset(d, 0, sizeof(d));
	for(int i=0;i<n;i++){
		scanf("%s %d", inw[i], &ina[i]);
		if(inw[i][0]=='I'){
			tes++;
		} else {
			if(tes>0) tes--;
		}
	}
	
	if(!tes){
		printf("EMPTY\n");
		return;
	}
	
	for(int i=0;i<n;i++){
		a=ina[i];
		
		if(inw[i][0]=='I'){
			d[start]=1;
			
			mind.push(make_pair(a, start));
			maxd.push(make_pair(a, start));
			
			sizee++;
			start++;
		} else {
			if(sizee<=0) continue;
			if(a<0){
				pair<int,int> imsi=getMin();
				d[imsi.second]=0;
				mind.pop();
			}
			else{
				pair<int,int> imsi=getMax();
				d[imsi.second]=0;
				maxd.pop();
			}
			
			sizee--;
		}
	}
	
	if(sizee==0) printf("EMPTY\n");
	else{
		printf("%d %d\n", getMax().first, getMin().first);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		gos();
		while(!mind.empty()) mind.pop();
		while(!maxd.empty()) maxd.pop();
	}
	
	return 0;
}
