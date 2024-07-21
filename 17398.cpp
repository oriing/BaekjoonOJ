#include <bits/stdc++.h>

using namespace std;

class UnionFind{
public:
	int uf[100010];
	int ufli[100010];
	UnionFind(){
		fill(uf, uf+100010, -1);
		fill(ufli, ufli+100010, 1);
		
	}
	
	int find(int a){
		if(uf[a]<0) return a;
		return uf[a] = find(uf[a]);
	}
	
	bool merge(int a, int b){
		a = find(a);
		b = find(b);
		if(a==b) return false;
		if(ufli[a] > ufli[b]){
			uf[a] = b;
			ufli[b] += ufli[a];
		}
		else{
			uf[b] = a;
			ufli[a] += ufli[b];
		}
		return true;
	}
};
int query[100100]={}, lnk[100100][3]={};
UnionFind uf;

int main(){
	int n, m, q;
	
	scanf("%d %d %d", &n, &m, &q);
	for(int i=1;i<=m;i++){
		scanf("%d %d", &lnk[i][1], &lnk[i][2]);
	}
	for(int i=1;i<=q;i++){
		scanf("%d", &query[i]);
		lnk[query[i]][0]=1;
	}
	
	long long int ans=0;
	for(int i=1;i<=m;i++){
		if(!lnk[i][0]) uf.merge(lnk[i][1], lnk[i][2]);
	}
	
	for(int i=q;i>0;i--){
		int a = uf.find(lnk[query[i]][1]);
		int b = uf.find(lnk[query[i]][2]);
		if(a != b){
			ans += uf.ufli[a] * uf.ufli[b];
			uf.merge(a, b);
		}
	}
	
	printf("%lld", ans);
	
	
	return 0;
}
