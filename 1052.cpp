#include <stdio.h>
#include <vector>

using namespace std;

int main(){
	int n, k;
	vector<int> bucket;
	int ans = 0;
	scanf("%d %d", &n, &k);
	int vi = n;
	int thispos = 0;
	
	bucket.push_back(n);
	while(vi > k){
		for(int i=0;i<bucket.size();i++){
			while(bucket[i] >= 2){
				bucket[i] -= 2;
				vi -= 1;
				if(i == bucket.size()-1){
					bucket.push_back(1);
				}
				else{
					bucket[i+1]++;
				}
			}
		}
		if(vi>k){
			ans++;
			bucket[0]++;
			vi++;
		}
	}
	printf("%d", ans);
	
	return 0;
}
