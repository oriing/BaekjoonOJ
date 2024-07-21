#include <stdio.h>
#include <algorithm>
#include <vector>

class Point{
public:
	int x, y;

	Point(int x, int y): x(x), y(y) {}
	Point(): x(0), y(0) {}
	
	bool operator<(Point &o){
		if(x == o.x) return y < o.y;
		return x < o.x;
	}
};

int main(){
	int n, tx, ty;
	std::vector<Point> v;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &tx, &ty);
		v.push_back(Point(tx, ty));
	}
	std::sort(v.begin(), v.end());
	
	int le = 0;
	int befend = -2147483647;
	for(int i=0;i<n;i++){
		if(befend < v[i].x){
			le += v[i].y - v[i].x;
			befend = v[i].y;
		}
		else{
			if(befend >= v[i].y) continue;
			le += v[i].y - befend;
			befend = v[i].y;
		}
	}
	printf("%d", le);
	
	return 0;
}
