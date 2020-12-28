#include <stdio.h>
#include <queue>

using namespace std;

int main(){
	int n;
	queue<int> q;
	
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		q.push(i);
	}
		if(q.size()==1){
			printf("%d", q.front());
		}
	while(!q.empty()){
		q.pop();
		if(q.size()==1){
			printf("%d", q.front());
			break;
		}
		q.push(q.front());
		q.pop();
		if(q.size()==1){
			printf("%d", q.front());
			break;
		}
	}
	
	
	
	return 0;
}
