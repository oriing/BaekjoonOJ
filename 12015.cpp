#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	int n, temp, pt;
	vector<int> d;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> temp;
		d.push_back(temp);
	}
		
	vector<int> ans;
	for(int i=0;i<n;i++){
		auto pt = lower_bound(ans.begin(), ans.end(), d[i]);
		if(pt==ans.end()) ans.push_back(d[i]);
		else *pt=d[i];
	}
	
	cout << ans.size();
	
	
	return 0;
}
