#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;

vector<int> v;

int find(int k, int n){
	if(k<=0) return 0;
	if(k==1){
		if(n==1) v.push_back(1);
		else if(n==0) v.push_back(0);
		else if(n==-1) v.push_back(-1);
		else return 0;
		return 1;
	}
	int ret;
	ret=0;
	
	if(abs(n-k)<=k)ret=find(k/3, n-k);
	if(ret) {
		v.push_back(1);
		return 1;
	}
	
	ret=0;
	if(abs(n)<=k) ret=find(k/3, n);
	if(ret) {
		v.push_back(0);
		return 1;
	}
	
	ret=0;
	if(abs(n+k)<=k)ret=find(k/3, n+k);
	if(ret) {
		v.push_back(-1);
		return 1;
	}
	
	return 0;
}

int main(){
	int n;
	
	scanf("%d", &n);
	if(n==0){
		printf("0");
		return 0;
	}
	int i=1;
	for(;abs(n)>=i;i*=3);
//	printf("%d\n", i);
	int ret=find(i, n);
//	printf("%d", ret);
	for(int j=0;j<v.size();j++) if(v[j]!=0) i=j;
	for(int j=i;j>=0;j--) printf("%c", (v[j]==-1?'T':v[j]+'0'));
}
