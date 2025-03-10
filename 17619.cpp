#include <stdio.h>

struct Lack{
	int x1, x2, y;
	Lack(){}
	Lack(int x1, int x2, int y): x1(x1), x2(x2), y(y) {}
	
	bool canCross(Lack o){
		// abba abab baba baab
		if(x1 <= o.x1 && o.x2 <= x2) return true;
		if(x1 <= o.x1 && o.x1 <= x2 && x2 <= o.x2) return true;
		if(o.x1 <= x1 && x1 <= o.x2 && o.x2 <= x2) return true;
		if(o.x1 <= x1 && x2 <= o.x2) return true;
		return false;
	}
};

const int MAX = 100010;
int parent[MAX];
int find(int a){
	if(parent[a] < 0) return a;
	return parent[a] = find(parent[a]);
}
int swap(int &a, int &b){
	int t = a; a = b; b = t;
}
void merge(int a, int b){
	a = find(a); b = find(b);
	if(a==b) return;
	if(parent[a] < parent[b]) swap(a, b);
	parent[b] += parent[a];
	parent[a] = b;
}
