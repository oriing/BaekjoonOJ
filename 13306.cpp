#include <bits/stdc++.h>

using namespace std;

class UnionFind{
public:
	int uf[200010];
	UnionFind(){
		fill(uf, uf+200010, -1);
	}
	
	int find(int a){
		if(uf[a]<0) return a;
		return uf[a] = find(uf[a]);
	}
	
	void merge(int a, int b){
		a = find(a);
		b = find(b);
		uf[b] = a;
	}
};
int lnk[200010]={}, query[400010][4]={};
UnionFind uf;

int main(){
	int n, q;
	
	scanf("%d %d", &n, &q); q += n-1;
	for(int i=2; i<=n; i++){
		scanf("%d", &lnk[i]);
	}
	for(int i=0;i<q;i++){
		scanf("%d %d", &query[i][0], &query[i][1]);
		if(query[i][0]) scanf("%d", &query[i][2]);
	}
	
	stack<bool> result;
	for(int i=q-1;i>=0;i--){
		if(query[i][0] == 0){
			uf.merge(query[i][1], lnk[query[i][1]]);
		}
		else {
			int a = uf.find(query[i][1]);
			int b = uf.find(query[i][2]);
			result.push(a==b);
		}
	}
	
	while(!result.empty()){
		printf("%s\n", result.top()?"YES":"NO");
		result.pop();
	}
	
	
	return 0;
}
