#include <stdio.h>

using namespace std;

int main(){
	int n, m, k;
	int tnum, pass=0;
	int d[1010]={};
	char temp[2];
	
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%s", temp);
		if(temp[0] == 'P') d[i]=1;
	}
	
	scanf("%d %d", &m, &k);
	for(int i=0;i<m;i++){
		pass = 0;
		for(int j=0;j<k;j++){
			scanf("%d", &tnum);
			if(d[tnum]) pass=1;
		}
		if(pass==0){
			printf("W");
			return 0;
		}
	}
	printf("P");
	return 0;
}
