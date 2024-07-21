#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, n, nowt;
	scanf("%d %d %d %d", &a, &b, &c, &n);
	
	int ta=n/a, tb=n/b, tc=n/c;
	
	for(int i=0;i<=ta;i++){
		for(int j=0;j<=tb;j++){
			for(int k=0;k<=tc;k++){
				nowt = i*a+j*b+k*c;
				if(nowt == n){
					printf("1"); return 0;
				}
				
				if(nowt > n) break;
			}
		}
	}
	
	printf("0");
	
	return 0;
}
