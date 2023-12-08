#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, temp, ans=0;
	
	cin >> n >> m;
	do{
		vector<int> v;
		ans = 0;
		for(int i=0;i<n;i++){
			cin >> temp;
			v.push_back(temp);
		}
		
		for(int i=0;i<m;i++){
			cin >> temp;
			if(binary_search(v.begin(), v.end(), temp))
				ans++;
		}
		cout << ans << '\n';
		
		cin >> n >> m;
	} while(n!=0 && m!=0);
	return 0;
}
