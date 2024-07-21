#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
int k, d[11]={};
char tmp[2];
bool cp[11]={false, };

bool check(int a, int b, int np){
	if(d[np] == 1) 	return a<b;
	else 			return a>b;
}

string mi, mx;

void solve(int cnt, string s){
	if(cnt == k+1){
		if(mi.size() == 0)	mi = s;
		else				mx = s;
		
		return;
	}
	
	for(int i=0;i<10;i++){
		if(cp[i]) continue;
		if(cnt == 0 || check(s[cnt-1]-'0', i, cnt-1)){
			cp[i] = true;
			solve(cnt+1, s+to_string(i));
			cp[i] = false;
		}
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(0);
	
	cin >> k;
	for(int i=0;i<k;i++){
		cin >> tmp;
		if(tmp[0] == '<') d[i] = 1;
		else d[i] = 0;
	}
	
	solve(0, "");
	
	cout << mx << '\n' << mi;
	
	return 0;
}
