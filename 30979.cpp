#include <stdio.h>

using namespace std;

int main(){
	int t, n, s=0, x;
	scanf("%d %d", &t, &n);
	for(int i=0;i<n;i++){
		scanf("%d", &x);
		s += x;
	}
	
	printf("Padaeng_i %s", s>=t?"Happy":"Cry");
	
	return 0;
}
