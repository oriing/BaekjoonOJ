#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, temp, ans=0, p, q;
	
	cin >> n >> m;
	do{
		vector<int> v1, v2;
		ans = 0; p=0; q=0;
		for(int i=0;i<n;i++){
			cin >> temp;
			v1.push_back(temp);
		}
		for(int i=0;i<m;i++){
			cin >> temp;
			v2.push_back(temp);
		}
		while(p<n && q<m){
			if(v1[p] == v2[q]){
				ans++;
				p++; q++;
			}
			else if(v1[p] > v2[q]) q++;
			else p++;
		}
		
		cout << ans << '\n';
		
		cin >> n >> m;
	} while(n!=0 && m!=0);
	return 0;
}
