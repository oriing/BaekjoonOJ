#include <stdio.h>
#include <string.h>
#include <deque>
#include <stdlib.h>

using namespace std;

int n;
char s[1000010]={};

void ends(){
	printf("-1");
	exit(0);
}

int main(){
	scanf("%s", s);
	n = strlen(s);
	
	deque<int> dq;
	
	for(int i=n-1;i>=0;i--){
		if(s[i] == 'f'){
			if(dq.size() <= 1) ends();
			dq[1] = dq[0] < dq[1] ? dq[0] : dq[1];
			dq.pop_front();
		}
		
		if(s[i] == 'g'){
			if(dq.empty()) ends();
			dq[0]++;
		}
		if(s[i] == 'x'){
			dq.push_front(0);
		}
	}
	if(dq.size() != 1) ends();
	printf("%d", dq[0]);
	
	return 0;
}
