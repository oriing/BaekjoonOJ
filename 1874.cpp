#include <stdio.h>
#include <stack>
#include <vector>
using namespace std;

int main(){
	stack<int> s;
	vector<char> ans;
	int n, a[100001], nowp=0, ni=1;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	while(nowp<n){/*
		if(ni<a[nowp]) {
			while(ni<=a[nowp]){
				s.push(ni++);
				ans.push_back('+');
			}
			nowp++;
		}
		else {
			while(!s.empty() && !(a[nowp]==s.top())){
				s.pop();
				ans.push_back('-');
			}
			if(!s.empty()) nowp++;
			else {
				printf("NO");
				return 0;
			}
		}
		s.pop();
		ans.push_back('-');*/
		while(ni<=a[nowp]){
			s.push(ni++);
			ans.push_back('+');
		}
		
		if(s.empty() || a[nowp]!=s.top()){
			printf("NO");
			return 0;
		}
		s.pop();
		ans.push_back('-');
		
		nowp++;
		
	}
	{
		int imn=ans.size();
		for(int i=0;i<imn;i++) printf("%c\n", ans[i]);
	}
	
	return 0;
}
