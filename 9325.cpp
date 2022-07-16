#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void gos(){
	int money, t1, t2, n;
	scanf("%d %d", &money, &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &t1, &t2);
		money+=t1*t2;
	}
	printf("%d\n", money);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) gos();
	
	return 0;
}
