#include <stdio.h>
#include <algorithm>

using namespace std;
	int n, m, a[500001], t[500001], ans[500001]={};

int search(int t, int f, int l){
	int mid=(f+l)/2;
	if(f>l) return -1;
	else{
		if(a[mid]==t) return t;
		else if(a[mid]>t) return search(t, f, mid-1);
		else return search(t, mid+1, l);
	}
}

int main(){
	
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d", &a[i]);
	scanf("%d", &m);
	for(int i=0;i<m;i++) scanf("%d", &t[i]);
	sort(a, a+n);
	for(int i=0;i<m;i++){
		int cnt=0, flag=0;
		int pos=search(t[i], 0, n-1);
		if(pos!=-1){
			int j=pos;
			while(j>0){
				if(t[i]==a[j-1]) j--;
				else break;
			}
			
			for(;j<n;j++){
				if(t[i]==a[j]){
					cnt++;
					flag=1;
				} else if(flag==1) break;
			}
			ans[i]=cnt;
		} else ans[i]=0;
	}
	for(int i=0;i<m;i++) printf("%d ", ans[i]);
	
	return 0;
}
