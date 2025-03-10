#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

struct cmp{
	bool operator()(int a, int b){
		return a>b;
	}
};

priority_queue<int,vector<int>, cmp> pq;

int main(){
	int n, t;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &t);
		if(t == 0){
			if(pq.empty()) printf("0\n");
			else{
				printf("%d\n", pq.top()); pq.pop();
			}
		}
		else{
			pq.push(t);
		}
	}
	return 0;
}
