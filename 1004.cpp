#include <stdio.h>

typedef long long int ll;

bool inner(ll x1, ll y1, ll x2, ll y2, ll dist){
	if((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) <= dist*dist){
		return true;
	}
	return false;
}

void gos(){
	int n, s1, s2, e1, e2;
	
	scanf("%d %d %d %d %d", &s1, &s2, &e1, &e2, &n);
	
	int ans = 0; int x, y, t;
	for(int i=0;i<n;i++){
		scanf("%d %d %d", &x, &y, &t);
		
		bool a = inner(s1, s2, x, y, t);
		bool b = inner(e1, e2, x, y, t);
		
		ans += a^b?1:0;
	}
	
	printf("%d\n", ans);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--) gos();
	
	return 0;
}
