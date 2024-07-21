#include <stdio.h>
#include <deque>
using namespace std;

deque<int> dq;

int i=0;
void op1(int x){
	dq.push_front(x);
}
void op2(int x){
	dq.push_front(dq[0]);
	dq[1] = x;
}
void op3(int x){
	dq.push_back(x);
}

int main(){
	int n, d[1000100]={};
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d", d+i);
	for(int i=1;i<=n;i++){
		switch(d[n-i]){
		case 1:
			op1(i);
			break;
		case 2:
			op2(i);
			break;
		case 3:
			op3(i);
			break;
		}
	}
	
	for(auto i=dq.begin(); i!=dq.end(); i++){
		printf("%d ", *i);
	}
	
	return 0;
}
