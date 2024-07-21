#include <bits/stdc++.h>
using namespace std;

int main(){
	int d[3], x = -1;
	scanf("%d %d %d", d, d+1, d+2);
	
	for(int i=0;i<3;i++){
		if(d[i] % 2 == 1){
			x = max(x*d[i], d[i]);
		}
	}
	if(x == -1){
		x=d[0]*d[1]*d[2];
	}
	printf("%d", x);
	
	return 0;
}
