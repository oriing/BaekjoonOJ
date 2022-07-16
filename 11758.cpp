#include <stdio.h>
#include <algorithm>

using namespace std;

int ccw(pair<int, int> a, pair<int, int> b, pair<int, int> c){
	int op=a.first*b.second+b.first*c.second+c.first*a.second;
	op-=(a.second*b.first+b.second*c.first+c.second*a.first);
	
	if(op>0) return 1;
	else if(op==0) return 0;
	else return -1;
}

int main(){
	pair<int,int> a, b, c;
	scanf("%d %d %d %d %d %d", &a.first, &a.second, &b.first, &b.second, &c.first, &c.second);
	printf("%d", ccw(a, b, c));
}
