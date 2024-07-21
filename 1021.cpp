#include <stdio.h>
#include <deque>

std::deque<int> q;
std::deque<int> qtemp1;
std::deque<int> qtemp2;

int left(int k){
	qtemp1 = q;
	int i = 0;
	while(qtemp1.front() != k){
		i++;
		qtemp1.push_back(qtemp1.front());
		qtemp1.pop_front();
	}
	return i;
}
int right(int k){
	qtemp2 = q;
	int i = 0;
	while(qtemp2.front() != k){
		i++;
		qtemp2.push_front(qtemp2.back());
		qtemp2.pop_back();
	}
	return i;
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int t;
	for(int i=1;i<=n;i++) q.push_back(i);
	int ans = 0;
	for(int i=1;i<=m;i++){
		scanf("%d", &t);
		int l = left(t), r = right(t);
		if(l > r){
			ans += r;
			q = qtemp2;
		}
		else{
			ans += l;
			q = qtemp1;
		}
		q.pop_front();
		
	}
	
	printf("%d", ans);
	return 0;
}
