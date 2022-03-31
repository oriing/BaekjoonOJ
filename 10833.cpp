#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	int n, cnt=0, t1, t2;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &t1, &t2);
		cnt+=t2%t1;
	}
	printf("%d", cnt);
	
	return 0;
}
