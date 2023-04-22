#include <stdio.h>
#include <string.h>
#include <vector>

using namespace std;
vector<int> v[30];

int main(){
	int n1, n2;
	char a[1010], b[1010];
	scanf("%s %s", a, b);
	
	int dp[1010]={};
	int p2=0;
	
	n1=strlen(a);
	n2=strlen(b);
	
//	for(int i=0;i<n2;i++){
//		v[b[i]-'A'].push_back(i);
//	}
	
	for(int i=0;i<n1;i++){
		int max=0;
		for(int j=0;j<n2;j++){
			if(max<dp[j]){
				max=dp[j];
			}
			else if(a[i]==b[j]){
				dp[j]=max+1;
			}
		}
	}
	int ans=0;
	for(int i=0;i<1010;i++){
		if(ans<dp[i]) ans=dp[i];
	}
	printf("%d", ans);
	
	return 0;
}
