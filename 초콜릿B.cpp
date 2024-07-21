#include <bits/stdc++.h>

void gos(){
	int n;
	scanf("%d", &n);
	
	if(n%2==0){
		for(int i=0;i<n;i++)printf("1");
		printf("\n");
	}
	else{
		if(n==1){
			printf("0\n");
			return;
		}
		if(n/2%2==1){
			for(int i=0;i<n/2;i++) printf("1");
			printf("2");
			for(int i=0;i<n/2;i++) printf("1");
			printf("\n");
		}
		else{
			for(int i=0;i<n/2;i++) printf("1");
			printf("0");
			for(int i=0;i<n/2;i++) printf("1");
			printf("\n");
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)gos();
	
	return 0;
}
