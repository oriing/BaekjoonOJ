#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

struct poc{
	char name[21];
	int num;
};
int n, m;
poc sbs[100001], sbn[100001];
char inp[21];

bool sos(poc a, poc b){
	int x=strlen(a.name);
	int y=strlen(b.name);
	if(x!=y) return x<y;
	for(int i=0;i<x;i++){
		if(a.name[i]==b.name[i]) continue;
		return a.name[i]<b.name[i];
	}
	return a.num<b.num;
}

void gon(){
	int nown=0, temp=strlen(inp);
	for(int i=0;i<temp;i++){
		nown*=10;
		nown+=inp[i]-'0';
	}
	printf("%s\n", sbn[nown].name);
}
void find(int l, int r, int y){
	int mid=(l+r)/2;
	if(l>r) return;
	int x=strlen(sbs[mid].name);
	if(x!=y){
		if(x>y) find(l, mid-1, y);
		else find(mid+1, r, y);
		return;
	}
	for(int i=0;i<x;i++){
		if(inp[i]==sbs[mid].name[i]) continue;
		if(inp[i]<sbs[mid].name[i]){
			find(l, mid-1, y);
			return;
		} else {
			find(mid+1, r, y);
			return;
		}
	}
	printf("%d\n", sbs[mid].num);
}
void gos(){
	int t=strlen(inp); 
	find(0, n-1, t);
}

int main(){
	int temp;
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++){
		scanf("%s", sbn[i].name);
		sbn[i].num=i;
		temp=strlen(sbn[i].name);
		sbs[i-1].num=i;
		for(int j=0;j<temp;j++) sbs[i-1].name[j]=sbn[i].name[j];
	}
	
	sort(sbs, sbs+n, sos);
	for(int i=0;i<m;i++){
		scanf("%s", inp);
		if(inp[0]<='9') gon();
		else gos();
	}
	
	return 0;
}
