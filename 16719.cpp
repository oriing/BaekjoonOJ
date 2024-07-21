#include <stdio.h>
#include <vector>
#include <string.h>

using namespace std;
vector<char> ans;
char inp[110];

void pri(){
	for(char &x : ans){
		
		if(x){
			printf("%c", x);
		}
	}
	printf("\n");
}

void find(int l, int r){
	int m = l;
	if(l > r) return;
	
	for(int i=l;i<=r;i++){
		if(inp[m] > inp[i]){
			m = i;
		}
	}
	
	ans[m] = inp[m];
	pri();
	
	find(m+1, r);
	find(l, m-1);
}

int main(){
	scanf("%s", inp);
	int n = strlen(inp);
	ans.resize(n);
	
	find(0, n-1);
	
	return 0;
}
