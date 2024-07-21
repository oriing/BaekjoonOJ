#include <bits/stdc++.h>
using namespace std;

const int MAX = 10010;
int parent[MAX];
int value[MAX];
int check[MAX]={};

int find(int a) {
    if (parent[a] < 0) return a;
    return parent[a] = find(parent[a]);
}
void merge(int a, int b) {
    a = find(a); b = find(b);
    if (a == b) return;
    if (value[a] < value[b]) swap(a, b);
    parent[a] = b;
}

int main(){
	memset(parent, -1, sizeof(parent));
	int n, m, k, t1, t2, s=0;
	scanf("%d %d %d", &n, &m, &k);
	for(int i=1;i<=n;i++){
		scanf("%d", &value[i]);
	}
	
	for(int i=0;i<m;i++){
		scanf("%d %d", &t1, &t2);
		merge(t1, t2);
	}
	for(int i=1;i<=n;i++){
		t1 = find(i);
		if(check[t1]==0){
			check[t1]=1;
			s += value[t1];
		}
	}
	
	if(s>k){
		printf("Oh no");
	}
	else{
		printf("%d", s);
	}
	return 0;
}
