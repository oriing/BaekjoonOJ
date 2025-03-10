#include <stdio.h>
#include <vector>
#include <utility>

using namespace std;
typedef pair<int,int> pii;

int min(int a, int b){
	return a<b?a:b;
}

int n, m, vmin = 2147483647;
vector<pii> nvs, home, chic;

int abs(int a){
	return a>=0?a:-a;
}
int length(pii a, pii b){
	return abs(a.first-b.first) + abs(a.second-b.second);
}

void dp(int now, int cnt){
	if(cnt == m){
		int nmin = 0, ntemp = 0;
		
		for(int i=0;i<home.size();i++){
			ntemp = 2147483647;
			for(int j=0;j<m;j++){
				ntemp = min(ntemp, length(home[i], nvs[j]));
			}
			nmin += ntemp;
		}
		
		vmin = min(vmin, nmin);
		return;
	}
	if(now >= chic.size()) return;
	
	dp(now+1, cnt);
	nvs.push_back(chic[now]);
	dp(now+1, cnt+1);
	nvs.pop_back();
}

int main(){
	int temp;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &temp);
			if(temp == 1) home.push_back(make_pair(i, j));
			if(temp == 2) chic.push_back(make_pair(i, j));
		}
	}
	dp(0, 0);
	printf("%d", vmin);
	return 0;
}
