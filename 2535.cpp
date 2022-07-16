#include <stdio.h>
#include <algorithm>

using namespace std;

struct da{
	int t;
	int b;
	int p;
};

da d[110];

bool fis(da a, da b){
	return a.p>b.p;
}

int main(){
	int n;
	int ans[3]={-1, -1, -1};
	int anp=0;
	scanf("%d", &n);
	
	for(int i=0;i<n;i++) scanf("%d %d %d", &d[i].t, &d[i].b, &d[i].p);
	
	sort(d, d+n, fis);
	for(int i=0;i<n;i++){
		if(anp>2) break;
		if(anp>1&&d[ans[0]].t==d[ans[1]].t){
			if(d[i].t!=d[ans[0]].t) ans[anp++]=i;
		}
		else ans[anp++]=i;
	}
	for(int i=0;i<anp;i++){
		printf("%d %d\n", d[ans[i]].t, d[ans[i]].b);
	}
}
