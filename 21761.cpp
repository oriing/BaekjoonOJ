#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> d[4];
int n, k, a[4]={};

bool bcn(int a, int b){
	return a>b;
}

int main(){
	scanf("%d %d", &n, &k);
	for(int i=0;i<4;i++) scanf("%d", &a[i]);
	
	char t1; int t2;
	for(int i=0;i<n;i++){
		scanf("%c %d", &t1, &t2);
		d[t1-'A'].push_back(t2);
	}
	for(int i=0;i<4;i++) sort(d[i].begin(), d[i].end(), bcn);
	
	
	
	return 0;
}
