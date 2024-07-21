#include <stdio.h>
#include <utility>

typedef std::pair<int,int> pii;

pii queue[5000010]={};
int qleft = 0;
int qright = 0;

int size(){
	return qright - qleft;
}
void pop(){
	if(size()) qleft++;
}
void pop_back(){
	if(size()) qright--;
}
void push(int a, int b){
	queue[qright].first = a;
	queue[qright++].second = b;
}
pii front(){
	return queue[qleft];
}
pii back(){
	return queue[qright-1];
}

int main(){
	int n, l, t;
	scanf("%d %d", &n, &l);
	
	for(int i=0;i<n;i++){
		scanf("%d", &t);
		
		while(size()){
			if(back().first > t) pop_back();
			else break;
		}
		while(size()){
			if(front().second <= i-l) pop();
			else break;
		}
		
		push(t, i);
		printf("%d ", front().first);
	}
	
	return 0;
}
