#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int mx=max(a, max(b, c));
	int ans=3*mx-a-b-c;
	printf("%d", ans);
}
