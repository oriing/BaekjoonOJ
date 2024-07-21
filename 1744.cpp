#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int &a, int &b){
	return a>b;
}

int main(){
	int n, temp;
	vector<int> v;
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%d", &temp);
		v.push_back(temp);
	}
	
	sort(v.begin(), v.end(), cmp);
	
	long long int s = 0;
	for(int i=0;i<n;i+=2){
//		printf("1: %d %d %lld\n", v[i], v[i+1], s);
		if(v[i] <= 0) break;
		if(v[i] == 1 || i+1>=n || v[i+1] <= 0 || v[i+1] == 1){
			s+=v[i];
			i--;
			continue;
		}
		
		s += v[i]*v[i+1];
	}
	
	for(int i=n-1;i>=0;i-=2){
//		printf("2: %d %d %lld\n", v[i], v[i-1], s);
		if(v[i]>0) break;
		if(i-1<0 || v[i-1]>0){
			s += v[i];
			break;
		}
		
		s += v[i] * v[i-1];
	}
	printf("%lld", s);
	
	return 0;
}
