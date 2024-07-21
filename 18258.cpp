#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	
	string s;
	int n, x;
	deque<int> q;

	cin >> n;
	while(n--){
		cin >> s;
		if(s == "push"){
			cin >> x;
			q.push_back(x);
			} else 
		if(s == "pop"){
			if(q.empty()) cout << "-1\n";
			else {
				cout << q.front() << '\n';
				q.pop_front();
			}
			} else 
		if(s == "size"){
			cout << q.size() << '\n';
			} else 
		if(s == "empty"){
			cout << (int)q.empty() << '\n';
			} else 
		
		if(s == "front"){
			if(q.empty()) cout << "-1\n";
			else cout << q.front() << '\n';
			} else 
		
		if(s == "back"){
			if(q.empty()) cout << "-1\n";
			else cout << q.back() << '\n';
			}
		
		
	}
	
	return 0;
}
