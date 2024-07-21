#include <stdio.h>
#include <algorithm>

using namespace std;

struct Meal{
	int a, b;
	Meal(): a(0), b(1){}
	Meal(int a, int b): a(a), b(b){}
	
	bool operator<(Meal ano){
		return a > ano.a;
	}
};

int main(){
	int n;
	int a;
	int t1, t2;
	vector<Meal> v;
	
	scanf("%d %d", &n, &a);
	for(int i=0;i<n;i++){
		scanf("%d %d", &t1, &t2);
		v.push_back(Meal(t1, t2));
	}
	sort(v.begin(), v.end());
	
	long long int ans=0;
	for(int i=0;i<n;i++){
		if(a >= v[i].b){
			a -= v[i].b;
			ans += v[i].a * v[i].b;
		}
		else{
			ans += v[i].a * a;
			break;
		}
	}
	printf("%lld", ans);
	
	return 0;
}
