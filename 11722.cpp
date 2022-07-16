#include <stdio.h>
#include <vector>
#include <algorithm>

#define ge(x) (lo<=(x) ? (ro>=(x) ? v[x] : -2147483647) : +2147483647)
#define ge2(x) (lo<=(x) ? (ro>=(x) ? dpd[x] : -2147483647) : +2147483647)

using namespace std;

typedef pair<int,int> pii;

int n, d[1000010], dp[1000010], dpd[1000010];
vector<int> v;
vector<int> vp;
vector<int> ans;

pii find(int x, int l, int r, int lo, int ro){
	int m=(l+r)/2;
	if(x==ge(m)) return make_pair(0, m);
	if(x<ge(m-1) && x>ge(m)) return make_pair(1, m);
	if(l>r) return make_pair(2, 0);
	
	if(x>ge(m)){
		return find(x, l, m-1, lo, ro);
	}
	else {
		return find(x, m+1, r, lo, ro);
	}
}

pii find2(int x, int l, int r, int lo, int ro){
	int m=(l+r)/2;
//	printf("(%d)", m);
	if(x==ge2(m)) return make_pair(0, m);
	if(x<ge2(m-1) && x>ge2(m)) return (m==0?make_pair(1, -1):make_pair(1, m-1));
	if(x>ge2(m)){
		return find2(x, l, m-1, lo, ro);
	}
	else {
		return find2(x, m+1, r, lo, ro);
	}
}

int main(){
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%d", &d[i]);
	}
	dp[0]=0;
	vp.push_back(0);
	v.push_back(d[0]);
	dpd[0]=d[0];

	int vsz=1, dpdz=1;
	for(int i=1;i<n;i++){
//		printf("%d:", d[i]);
		pii p=find(d[i], 0, vsz, 0, vsz-1);
			if(p.first==0){
//				printf("a");
				pii t=find2(d[i], 0, dpdz, 0, dpdz-1);
				if(t.first==0) dp[i]=t.second;
				else {
					dp[i]=t.second+1;
					if(dpdz<=dp[i]) dpdz++;
					dpd[dp[i]]=d[i];
				}
			}else if(p.first==1){
//				printf("b");
				if(p.second>0){
					dp[i]=find2(d[i], 0, dpdz, 0, dpdz-1).second+1;
//					printf("%d", dp[i]);
					if(dpdz<=dp[i]) dpdz++;
					dpd[dp[i]]=d[i];
				}
				else{
					dp[i]=0;
					if(dpdz<=dp[i]) dpdz++;
					dpd[0]=d[i];
				}
				if(p.second==vsz){
					v.push_back(d[i]);
					vp.push_back(i);
				}
				else{
					vector<int>::iterator vpb, vb;
					vpb=vp.begin();
					vb=v.begin();
					for(int i=0;i<p.second;i++){
						vpb++;
						vb++;
					}
					vp.insert(vpb, i);
					v.insert(vb, d[i]);
				}
				vsz++;
			}else{
//				printf("c");
				dp[i]=find2(d[i], 0, dpdz, 0, dpdz-1).second+1;
				vp.push_back(i);
				v.push_back(d[i]);
				if(dpdz<=dp[i]) dpdz++;
				dpd[dp[i]]=d[i];
				vsz++;
		}
//		printf("t\n");
	}
	
	int mx=-2147483647, mxp=-1;
	for(int i=0;i<n;i++){
		if(mx<dp[i]){
			mx=dp[i];
			mxp=i;
		}
	}
	
	printf("%d\n", mx+1);
	
	return 0;
}
