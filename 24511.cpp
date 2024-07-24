#include <stdio.h>
#include <queue>

int n;
int ins[100010];
std::queue<int> q;
int m, k;

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", ins+i);
		ins[i] = ins[i]?0:1;
	}
	for(int i=0;i<n;i++){
		scanf("%d", &k);
		if(ins[i]) ins[i] = k;
	}
	for(int i=n-1;i>=0;i--){
		if(ins[i]) q.push(ins[i]);
	}
	scanf("%d", &m);
	for(int i=0;i<m;i++){
		scanf("%d", &k);
		q.push(k);
		printf("%d ", q.front());
		q.pop();
	}
	
	
	return 0;
}
