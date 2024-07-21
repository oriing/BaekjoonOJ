#include <bits/stdc++.h>

int main(){
	int n;
	char sbef[5010]={}, sthi[5010]={};
	scanf("%d", &n);
	if(n==1){
		printf("0");
		return 0;
	}
	scanf("%s", sthi);
	for(int i=1;i<n;i++){
		strcpy(sbef, sthi);
		scanf("%s", sthi);
		for(int j=0;j<i;j++){
			if(sbef[j]=='R'){
				if(sthi[j]=='R' && sthi[j+1]=='R'){
					sbef[j] = sthi[j] = sthi[j+1] = 'E';
				}
				else{
					printf("0");
					return 0;
				}
			}
			else if(sbef[j]=='B'){
				if(sbef[j+1]=='B' && sthi[j+1]=='B'){
					sbef[j] = sbef[j+1] = sthi[j+1] = 'E';
				}
				else{
					printf("0");
					return 0;
				}
			}
		}
		for(int j=0;j<i;j++){
			if(sbef[j] == 'B' || sbef[j] == 'R'){
				printf("0");
				return 0;
			}
		}
	}
	
	for(int j=0;j<n;j++){
		if(sthi[j] == 'B' || sthi[j] == 'R'){
			printf("0");
			return 0;
		}
	}
	printf("1");
	
	return 0;
}
