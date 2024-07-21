#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, temp, flag;
	int d[1010], length[1010];
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &d[i]);
	}
	
	int mx=0;
	for(int i=0;i<n;i++){
		length[i] = d[i];
		
		for(int j=0;j<i;j++){
			if(d[j] < d[i]){
				length[i] = max(length[i], length[j]+d[i]);
			}
		}
		
		mx = max(mx, length[i]);
	}
	printf("%d", mx);
	
	return 0;
}
