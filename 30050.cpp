#include <stdio.h>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#define MAXVALUE 1000000001

using namespace std;

vector<set<int> > head;
vector<int>       body;
unordered_map<int,int> pos;
int tempkey = 0;

void makeMap(int px, int bef){
	auto temp = pos.find(px);
//	printf("%d\n", px);
	if(temp == pos.end()){
		pos.insert({px, tempkey++});
		body.push_back(px/2);
		if(bef != -1) head.push_back({bef});
		else          head.push_back({});
		makeMap(px/2, px);
	}
	else{
		head[pos[px]].insert(bef);
	}
}

map<int,long long int> finda;
void findA(int now, long long int sum){
	if(now == -1) return;
	finda.insert({now, sum});
	findA(body[pos[now]], sum+now);
}
long long int findB(int now){
	auto ptr = finda.find(now);
	if(ptr != finda.end()) return (long long int)finda[now] + now;
	return findB(body[pos[now]]) + now;
}

int datas[50010][3];

int main(){
	int q, x, a, b;
	scanf("%d", &q);
	pos.insert({1, tempkey++});
	body.push_back(-1);
	head.push_back({});
	
	for(int i=0;i<q;i++){
		scanf("%d %d %d", &x, &a, &b);
		datas[i][0]=x; datas[i][1]=a; datas[i][2]=b;
		makeMap(a, -1);
		makeMap(b, -1);
	}
	
	for(int i=0;i<q;i++){
		x=datas[i][0]; a=datas[i][1]; b=datas[i][2];
		
		if(x==1){
			head[pos[body[pos[b]]]].erase(b);
			head[pos[a]].insert(b);
			body[pos[b]] = a;
		}
		else{
			finda.clear();
			findA(a, 0);
			printf("%lld\n", findB(b));
		}
	}
	
	return 0;
}
