#include <stdio.h>
#include <vector>

using namespace std;

int n, tmp, k=0;
vector<int> v;

int main(){
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%d", &tmp);
		v.push_back(tmp);
		if(k < tmp) k=tmp;
	}
	k++;
	
	vector<int> ans(k, -2);
	ans[v[0]] = -1;
	
	for(int i=1;i<n;i++){
		if(ans[v[i]] != -2) continue;
		ans[v[i]] = v[i-1];
	}
	
	printf("%d\n", ans.size());
	
	for(int i=0;i<ans.size();i++){
		if(ans[i] == -2) ans[i] = -1;
		printf("%d ", ans[i]);
	}
		
	return 0;
}
