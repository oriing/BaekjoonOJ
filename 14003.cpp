#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, temp, flag, mx=-1, mxpos, inppos;
	vector<int> v, ans, val;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &temp);
		
		auto pos = upper_bound(v.begin(), v.end(), temp);
		
		if(pos!=v.begin() && *(pos-1) == temp) pos--;
		inppos = pos-v.begin();
		if(v.end() == pos){
			v.push_back(temp);
		}
		else *pos = temp;
		
		ans.push_back(inppos);
		val.push_back(temp);
		if(mx < inppos){
			mx = inppos;
			mxpos = i;
		}
	}
	
	stack<int> pr;
	printf("%d\n", v.size());
	for(int i=mxpos;i>=0;i--){
		if(mx == ans[i]){
			pr.push(val[i]);
			mx--;
		}
	}
	while(!pr.empty()){
		printf("%d ", pr.top());
		pr.pop();
	}
	
	return 0;
}
