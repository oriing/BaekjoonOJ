#include <bits/stdc++.h>
using namespace std;
int n, m, mxsong=0, mivalue=2147483647;
char d[11][55]={}, tmp[60];
int use[12]={};
int sing[55]={};

void gos(int now){
	if(now == n){
		int s = 0, s2 = 0;
		for(int i=0;i<m;i++) if(sing[i]) s++;
		for(int i=0;i<n;i++) if(use[i]==1) s2++;
		if(s > mxsong || (s == mxsong && s2 < mivalue)){
			mivalue = s2;
			mxsong = s;
		}
		return;
	}
	
	if(use[now] == -1){
		gos(now+1);
		return;
	}
	
	//using
	int checker=0;
	for(int i=0;i<m;i++){
		if(d[now][i]==0) continue;
		if(sing[i]==0) checker=1;
		sing[i]++;
	}
	if(checker!=0){
		use[now]=1;
		gos(now+1);
		use[now]=0;
	}
	for(int i=0;i<m;i++){
		if(d[now][i]) sing[i]--;
	}
	
	//not using
	gos(now+1);
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++){
		scanf("%s %s", tmp, d[i]);
		for(int j=0;j<m;j++){
			d[i][j] = (d[i][j]=='Y' ? 1 : 0);
		}
	}
	
	// all Y and all N check
	int check1=0, check2=0;
	for(int i=0;i<n;i++){
		check1=0;
		for(int j=0;j<m;j++){
			if(d[i][j]) check1+=(check2=1);
		}
		if(check1==m){
			printf("1");
			return 0;
		}
		if(check1==0){
			use[i]=-1;
		}
	}
	if(check2==0){
		printf("-1");
		return 0;
	}
	
	gos(0);
	
	printf("%d", mivalue);
	
	return 0;
}
