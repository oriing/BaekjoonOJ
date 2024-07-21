#include <bits/stdc++.h>
using namespace std;

long long int get(int n, int m, int a, int b){
	long long int val=0, temp;
	int lower = m%b;
	val += n/(a*2)*m*a;
	val += n/(a*2)*lower*a;
	val += min(n%(a*2), a)*m;
	val += (n%(a*2) - min(n%(a*2), a))*lower;
	return val;
}

void gos(){
	int n, m, a, b;
	scanf("%d %d %d %d", &n, &m, &a, &b);
	long long int val = get(n, m, a, b);
	val = max(val, get(m, n, b, a));
	
	printf("%lld\n", val);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)gos();
	
	return 0;
}
