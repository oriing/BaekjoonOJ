#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int mgear[1001];

class belt{
public:
	int gear[2];
	double d;
	
	belt(int a, int b, double d){
		this->gear[0] = a;
		this->gear[1] = b;
		this->d = d;
	}
	
	bool operator <(belt &gear){
		return this->d < gear.d;
	}
};

int getm(int g){
	if(mgear[g] == g)
		return g;
	return getm(mgear[g]);
}

void connect(int g1, int g2){
	if(getm(g1) < getm(g2))
		mgear[g2] = g1;
	else
		mgear[g1] = g2;
}

int cycle(int g1, int g2){
	if(getm(g1) == getm(g2))
		return 1;
	return 0;
}

int main(){
	int n;
	int g[1001][3];
	double c;
	double length;
	double pi = M_PI;
	double sum = 0;
	
	vector<belt> v;
	
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &g[i][0], &g[i][1], &g[i][2]);
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			c = sqrt(pow((g[i][0]-g[j][0]), 2) + pow((g[i][1]-g[j][1]), 2));
			if(c <= g[i][2]+g[j][2]){
				v.push_back(belt(i, j, 0));
			}
			else{
				length = (2*c + (pi/2)*(g[i][2]+g[j][2]) + (pow((g[i][2]-g[j][2]),2) / (4*c)));
				v.push_back(belt(i, j, length));
			}
		}
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 1; i <= n; i++){
		mgear[i] = i;
	}
	
	for(int i = 0; i < v.size(); i++){
		if(cycle(v[i].gear[0], v[i].gear[1]) == 0){
			sum += v[i].d;
			connect(v[i].gear[0], v[i].gear[1]);
		}
	}
	
	printf("%.12f", sum);
	
	return 0;
}
