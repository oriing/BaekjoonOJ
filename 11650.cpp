#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <utility>
using namespace std;

bool sos(pair<int, int> a, pair<int, int> b){
	if(a.first==b.first){
		return a.second<b.second;
	} else return a.first<b.first;
}

int main(){
	pair<int, int> p[100001]; int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &p[i].first, &p[i].second);
	}
	sort(p, p+n, sos);
	for(int i=0;i<n;i++){
		printf("%d %d\n", p[i].first, p[i].second);
	}
	
	return 0;
} 
