#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

struct Point{
	ll x;
	ll y;
	
	Point(ll x, ll y): x(x), y(y) {}
	bool operator<(const Point &a){
		return y==a.y ? x<a.x : y>a.y;
	}
};

vector<Point> v;

int ccw(Point a, Point b, Point c){
	ll result = 0;
	result += a.x*b.y + b.x*c.y + c.x*a.y;
	result -= b.x*a.y + c.x*b.y + a.x*c.y;
	if(result>0) return 1;
	if(result<0) return -1;
	return 0;
}

ll dist(Point a, Point b){
	return (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y);
}

bool cmp(Point a, Point b){
	int c = ccw(v[0], a, b);
	
	if(c==0) return dist(v[0], a) < dist(v[0], b); // 직진인 경우 짧은 순서로 
	
	return c<0; // 우회전 순서로  
}

int n;
ll t1, t2;

int gos(){
	while(v.size()) v.pop_back();
	
	scanf("%d", &n); 
	for(int i=0;i<n;i++){
		scanf("%lld %lld", &t1, &t2);
		v.push_back(Point(t1, t2));
	}
	
	sort(v.begin(), v.end());
	sort(v.begin()+1, v.end(), cmp);
	
	stack<Point> ans;
	ans.push(v[0]);
	ans.push(v[1]);
	
	for(int i=2;i<n;i++){
		while(ans.size() >= 2){
			Point t1 = ans.top(); ans.pop();
			Point t2 = ans.top();
			if(ccw(v[i], t2, t1) < 0){
				ans.push(t1);
				break;
			}
		}
		ans.push(v[i]);
	}
	
	printf("%d\n", ans.size());
	
	vector<Point> ansv;
	while(!ans.empty()){
		ansv.push_back(ans.top()); ans.pop();
	}
	
	for(int i=ansv.size()-1;i>=0;i--){
		printf("%d %d\n", ansv[i].x, ansv[i].y);	
	}
	
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) gos();
	return 0;
}
