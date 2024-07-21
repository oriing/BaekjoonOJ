#include <bits/stdc++.h>
using namespace std;

vector<int> v[100100];
int n, checker[100100]={}, rootnode;
long long int cnt=0, nbef=0;

void gofind(int now, long long int depth, bool right){
	nbef = depth;
	
	if(v[now][0]!=-1){
		cnt++;
		gofind(v[now][0], depth+1, false);
		cnt++;
	}
	if(v[now][1]!=-1){
		cnt++;
		gofind(v[now][1], depth+1, right);
		if(!right) cnt++;
	}
}

int main(){
	scanf("%d", &n);
	int t1, t2, now;
	for(int i=1;i<=n;i++){
		scanf("%d %d %d", &now, &t1, &t2);
		v[now].push_back(t1);
		v[now].push_back(t2);
		if(t1!=-1) {
			checker[t1]=1;
		}
		if(t2!=-1) {
			checker[t2]=1;
		}
	}
	
	for(int i=1;i<=n;i++) if(checker[i]==0){
		rootnode = i;
		break;
	}
	
	gofind(rootnode, 0, true);
	
	printf("%lld", cnt);
	return 0;
}
