#include <stdio.h>
#include <algorithm>
int main(){
	int k = 0;
	int d[10];
	for(int i=0;i<9;i++) scanf("%d", d+i);
	for(int i=0;i<9;i++) k += d[i];
	std::sort(d, d+9);
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(i==j) continue;
			if(k-d[i]-d[j]==100){
				for(int x=0;x<9;x++){
					if(x!=i && x!=j){
						printf("%d\n", d[x]);
					}
				}
				return 0;
			}
		}
	}
	
	
	return 0;
}
