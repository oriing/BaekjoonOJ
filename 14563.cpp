#include <stdio.h>

using namespace std;

int f(int x){
	int s = 0, t;
	
	for(int i=1;i<x;i++){
		if(x % i == 0){
			s += i;
		}
	}
	if(s == x) return 1;
	if(s < x) return 2;
	return 3;
}

int main(){
	int t;
	int x;
	scanf("%d", &t);
	
	for(int i=0;i<t;i++){
		scanf("%d", &x);
		switch(f(x)){
			case 1:
				printf("Perfect\n");
				break;
				
			case 2:
				printf("Deficient\n");
				break;
				
			case 3:
				printf("Abundant\n");
				break;
				
		}
	}
	
	
	return 0;
}
