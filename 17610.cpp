#include <stdio.h>
#include <set>

std::set<int> se;
int s=0, d[14], n;

void find(int idx, int nowl, int nowr){
	if(idx==n){
		if(nowr-nowl > 0) se.insert(nowr-nowl);
		if(nowl-nowr > 0) se.insert(nowl-nowr);
		return;
	}
	find(idx+1, nowl+d[idx], nowr);
	find(idx+1, nowl, nowr+d[idx]);
	find(idx+1, nowl, nowr);
}

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", d+i);
		s += d[i];
	}
	
	find(0, 0, 0);
	printf("%d", s-se.size());
	
	return 0;
}
