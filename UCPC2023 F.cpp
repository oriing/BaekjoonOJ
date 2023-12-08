#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
using namespace std;
typedef vector<int> vi;

int main(){
    int a[1001][1001] = {};
    int n;
    int q;
    int num = 1;
    char order[3];
    int ch[4];
    int temp;
    vi Qx;
    vi Qy;
    
    
    scanf("%d %d", &n, &q);
    for(int i = 1; i <= n; i++){
    	
	}
	for(int i = 1; i <= n; i++){
		
	}
	
	for(int k = 0; k < q; k++){
		scanf("%s", order);
	
		if(strcmp(order, "RO") == 0){
			for(int i=1;i<n;i++){
				Qx[i]=
				Qy[i]=
			}
		}
	
		if(strcmp(order, "RE") == 0){
			for(int i = 1; i < n; i+=2){
				for(int j = n; j > 0; j--){
					a[i][j] = a[i][j-1];
				}
				a[i][0] = a[i][n];
			}
		}
	
		if(strcmp(order, "CO") == 0){
			for(int i = 0; i < n; i+=2){
				for(int j = n; j > 0; j--){
					a[j][i] = a[j-1][i];
				}
				a[0][i] = a[n][i];
			}
		}
	
		if(strcmp(order, "CE") == 0){
			for(int i = 1; i < n; i+=2){
				for(int j = n; j > 0; j--){
					a[j][i] = a[j-1][i];
				}
				a[0][i] = a[n][i];
			}
		}
		
		if(strcmp(order, "S") == 0){
			for(int i = 0 ; i < 4; i++){
				scanf("%d", &ch[i]);
			}
			temp = a[ch[0]-1][ch[1]-1];
			a[ch[0]-1][ch[1]-1] = a[ch[2]-1][ch[3]-1];
			a[ch[2]-1][ch[3]-1] = temp;
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	
	return 0;
}
