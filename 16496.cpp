#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool comp(string &a, string &b){
	return a+b > b+a;
}

string d[1010];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> d[i];
	}
	
	sort(d, d+n, comp);
	if(d[0]=="0"){
		cout << "0";
		return 0;
	}
	for(int i=0;i<n;i++){
		cout << d[i];
	}
	return 0;
}
