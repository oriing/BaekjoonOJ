#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
int n, m, s, dat[100010];
std::vector<int> next[100010];

void find(int now, int nws){
	dat[now] = nws;
	for(int i=0;i<next[now].size();i++){
		if(dat[next[now][i]] == -1) find(next[now][i], nws+1);
	}
}

int main(){
	int xt, xst;
	memset(dat, -1, sizeof(dat));
	scanf("%d %d %d", &n, &m, &s);
	for(int i=0;i<m;i++){
		scanf("%d %d", &xt, &xst);
		next[xt].push_back(xst);
		next[xst].push_back(xt);
	}
	for(int i=1;i<=n;i++){
		std::sort(next[i].begin(), next[i].end());
	}
	
	find(s, 0);
	
	for(int i=1;i<=n;i++){
		printf("%d\n", dat[i]);
	}
	return 0;
}
