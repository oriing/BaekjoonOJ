#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int n, m, d[21]={}, p[21]={}, k=0;
	
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		int t, ch=0;
		scanf("%d", &t);
		for(int j=0;j<n;j++){
			if(p[j]==t){
				d[j]++;
				ch=1;
				break;
			}
		}
		if(ch) continue;
		
		if(k<n){
			k++;
			p[k-1]=t;
			d[k-1]=1;
		}
		else{
			int mi=0;
			for(int j=1;j<k;j++){
				if(d[mi]>d[j]){
					mi=j;
				}
			}
			for(int j=mi;j<n-1;j++){
				d[j]=d[j+1];
				p[j]=p[j+1];
			}
			p[n-1]=t;
			d[n-1]=1;
		}
	}
	
	sort(p, p+k);
	
	for(int i=0;i<k;i++) printf("%d ", p[i]);
//	printf("\n");
//	for(int i=0;i<k;i++) printf("%d ", d[i]);
	
	return 0;
}
