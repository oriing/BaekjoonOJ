#include <stdio.h>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;
typedef pair<int,int> pii;
vector<pii> v;

int main(){
	int n, m, t1, t2;	
	scanf("%d %d", &n, &m);
	for(int i=1;i<=m;i++){
		scanf("%d %d", &t1, &t2);
		v.push_back(make_pair(t1, i));
		v.push_back(make_pair(t2, i));
	}

	sort(v.begin(), v.end());
	printf("%d\n", v[(n-1)%(m*2)].second);
	
	return 0;
}
