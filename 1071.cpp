#include <stdio.h>
#include <algorithm>

using namespace std;


int main(){
	int n;
	int d[100], ans[100], cnt[1010]={}, t=1;
	for(int i=0;i<100;i++) d[i]=-1000;
	ans[0]=-1000;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", d+i);
	}
	
	sort(d, d+n);
	
	for(int i=0;i<n;i++){
		cnt[d[i]]++;
	}
	
	int st=0;
	for(int t=1;t<=n;t++){
		for(int i=st;i<=1000;i++){
			if(!cnt[i]){
				st=i;
				continue;
			}
			if(ans[t-1]+1!=i){
				ans[t]=i;
				cnt[i]--;
				break;
			}
			else{
				int j, ch=0;
				for(j=i+1;j<=1000;j++){
					if(!cnt[j]) continue;
					ans[t]=j;
					cnt[j]--;
					ch=1;
					break;
				}
				if(!ch){
					int im=ans[t-1];
					for(int j=t-1;j>0;j--){
						if(ans[j]!=im) break;
						t--;
						cnt[ans[j]]++;
					}
					ans[t]=i;
					cnt[i]--;
				}
				break;
			}
		}
	}
	
	for(int i=1;i<=n;i++) printf("%d ", ans[i]);
	
	return 0;
}
