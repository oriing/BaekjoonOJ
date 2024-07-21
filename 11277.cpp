#include <stdio.h>
#include <vector>
using namespace std;

bool d[25]={};

class Checker{
	int a, b;
	bool nota, notb;
public:
	Checker(int x, int y){
		if(x>0) {
			a = x;
			nota = false;
		}
		else {
			a = -x;
			nota = true;
		}
		if(y>0) {
			b = y;
			notb = false;
		}
		else {
			b = -y;
			notb = true;
		}
	}
	Checker(): a(0), b(0), nota(false), notb(false) {}
	
	bool get(){
		return d[a]^nota || d[b]^notb;
	}
};

vector<Checker> v;
int n, m;

bool find(int now){
	if(now == n+1){
		for(auto &x : v){
			if(x.get()) continue;
			return false;
		}
		return true;
	}
	
	d[now] = false;
	
	if(find(now+1)) return true;
	
	d[now] = true;
	
	return find(now+1);
}

int main(){
	int ta, tb;
	scanf("%d %d", &n, &m);
	
	for(int i=0;i<m;i++){
		scanf("%d %d", &ta, &tb);
		v.push_back(Checker(ta, tb));
	}
	bool result = find(1);
	printf("%d\n", result);
	if(result){
		for(int i=1;i<=n;i++) printf("%d ", d[i]);
	}
	
	return 0;
}
