#include <stdio.h>
#include <vector>
#include <stack>

typedef std::vector<int> vi;

std::stack<vi> ans;
int n;
vi s;
vi p;

void push(int x){
	s.push_back(x);
}
void pop(){
	s.pop_back();
}
int top(){
	return s.back();
}
void printNow(){
	vi temp;
	for(int i=0;i<p.size();i++){
		temp.push_back(p[i]);
	}
	for(int i=s.size()-1;i>=0;i--){
		temp.push_back(s[i]);
	}
	ans.push(temp);
}
void popIn(){
	p.push_back(top());
	pop();
}

void find(int nv, int sp){
	if(nv==n){
		push(nv);
		printNow();
		pop();
		return;
	}
	
	push(nv);
	find(nv+1, p.size());
	while(s.size()){
		popIn();
		find(nv+1, p.size());
	}
	while(p.size()>sp){
		push(p[p.size()-1]);
		p.pop_back();
	}
	pop();
}

int main(){
	scanf("%d", &n);
	
	find(1, 0);
	
	while(!ans.empty()){
		vi now = ans.top(); ans.pop();
		
		for(int &x : now){
			printf("%d ", x);
		}
		printf("\n");
	}
	
	return 0;
}
