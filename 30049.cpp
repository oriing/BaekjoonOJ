#include <stdio.h>
#include <vector>
#include <utility>

typedef std::pair<int,int> pii;
typedef std::vector<int> vec;
typedef std::vector<pii> vpi;

int n, m, k;
int iammax[310]={};
int sums[310][10010]={};
int nowmax[10010]={};
int ans = 0;

int main(){
	int t1, t2;
	scanf("%d %d %d", &n, &m, &k);
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<k;j++){
			scanf("%d %d", &t1, &t2);
			sums[i][t1] = t2;
			
			if(sums[nowmax[t1]][t1] < sums[i][t1]){
				if(iammax[nowmax[t1]] == k) ans--;
				iammax[nowmax[t1]]--;
				
				iammax[i]++;
				if(iammax[i] == k) ans++;
				nowmax[t1]=i;
			}
		}
	}
	
	int i, xt;
	scanf("%d", &xt);
	for(int j=0;j<xt;j++){
		scanf("%d %d %d", &i, &t1, &t2);
		sums[i][t1] += t2;
		
		if(sums[nowmax[t1]][t1] < sums[i][t1]){
			if(iammax[nowmax[t1]] == k) ans--;
			iammax[nowmax[t1]]--;
			
			iammax[i]++;
			if(iammax[i] == k) ans++;
			nowmax[t1]=i;
		}
		printf("%d\n", ans);
	}
	
	
	return 0;
}
