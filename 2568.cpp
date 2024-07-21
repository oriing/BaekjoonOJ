#include <bits/stdc++.h>
#define A first
#define B second
using namespace std;

typedef pair<int,int> pii;

int main(){
	int n, temp1, temp2, temp, cnt, flag, mxp, mx=-1;
	vector<pii> data;
	vector<int> v;
	vector<int> save;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &temp1, &temp2);
		data.push_back(make_pair(temp1, temp2));
	}
	sort(data.begin(), data.end());
	
	for(int i=0;i<n;i++){
		temp = data[i].B;
		auto pos = upper_bound(v.begin(), v.end(), temp);
		if(pos!=v.begin() && *(pos-1) == temp) pos--;
		
		cnt = pos - v.begin();
		
		if(v.end() == pos) v.push_back(temp);
		else *pos = temp;
		
		save.push_back(cnt);
	}
	
	vector<int> ans;
	mx = v.size()-1;
	for(int i=n-1;i>=0;i--){
		if(mx == save[i]){
			mx--;
			continue;
		}
		ans.push_back(data[i].A);
	}
	
	printf("%d\n", ans.size());
	
	for(int i=ans.size()-1;i>=0;i--){
		printf("%d\n", ans[i]);
	}
		
	return 0;
}
