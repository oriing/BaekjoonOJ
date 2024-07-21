#include <stdio.h>
#include <deque>
#include <vector>

using namespace std;

deque<int> dq;

void gos(){
	int f, x;
	scanf("%d", &f);
	
	switch(f){
	case 1:
		scanf("%d", &x);
		dq.push_front(x);
		break;
	case 2:
		scanf("%d", &x);
		dq.push_back(x);
		break;
	case 3:
		if(dq.empty()) printf("-1\n");
		else{
			printf("%d\n", dq.front());
			dq.pop_front();
		}
		break;
	case 4:
		if(dq.empty()) printf("-1\n");
		else{
			printf("%d\n", dq.back());
			dq.pop_back();
		}
		break;
	case 5:
		printf("%d\n", dq.size());
		break;
	case 6:
		printf("%d\n", dq.empty());
		break;
	case 7:
		if(dq.empty()) printf("-1\n");
		else{
			printf("%d\n", dq.front());
		}
		break;
	case 8:
		if(dq.empty()) printf("-1\n");
		else{
			printf("%d\n", dq.back());
		}
		break;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		gos();
	}
	return 0;
}
