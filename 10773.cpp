#include <stdio.h>
#include <stack>
using namespace std;
int main(){
	int n;
	stack<int> s;
	int a, sum=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a);
		if(a==0){
			if(!s.empty()) s.pop();
		} else s.push(a);
	}
	while(!s.empty()){
		sum+=s.top();
		s.pop();
	}
	
	printf("%d", sum);
	
	return 0;
}
