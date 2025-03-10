#include <stdio.h>
#include <algorithm>
#include <vector>

class Data{
public:
	int team, a, b, c;
	Data(int q, int w, int e, int r){
		team = q; a = w; b = e; c = r;
	}
	Data(){
	}
	bool operator<(Data& o){
		if(o.a != a) return a > o.a;
		if(o.b != b) return b > o.b;
		return c > o.c;
	}
	bool operator==(Data& o){
		return a==o.a && b==o.b && c==o.c;
	}
};

std::vector<Data> v;

int main(){
	int n, t;
	scanf("%d %d", &n, &t);
	int a, b, c, d;
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		v.push_back(Data(a, b, c, d));
	}
	std::sort(v.begin(), v.end());
	
	if(v[0].team == t){
		printf("%d", 1);
		return 0;
	}
	int nowdeungsu = 1;
	for(int i=1;i<v.size();i++){
		if(!(v[i-1] == v[i])) nowdeungsu = i+1;
		if(v[i].team == t){
			printf("%d", nowdeungsu);
			return 0;
		}
	}
	
	return 0;
}
