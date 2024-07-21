#include <stdio.h>
#include <vector>

int sumTemp[510]={};
bool primeValid[1000010]={};
std::vector<int> prime;
int sum(int l, int r){
	return sumTemp[r] - sumTemp[l-1];
}

int main(){
	int n=0, N, right;
	scanf("%d", &N);
	for(int i=1;i<=N;i++){
		scanf("%d", &sumTemp[i]);
		sumTemp[i] += sumTemp[i-1];
		n = sumTemp[i];
	}
	if(n<=N) n = N;
	
	for(int i=2;i<=n;i++) primeValid[i] = true;
	for(int i=2;i<=n;i++){
		if(!primeValid[i]) continue;
		for(int j=i*2;j<=n;j+=i) primeValid[j] = false;
		prime.push_back(i);
//		printf("%d\n", i);
	}
	
	int ans = 0;
	for(int i=1;i<=N;i++){
		for(int j=0;j<prime.size();j++){
			right = i+prime[j]-1;
			if(right > N) break;
//			printf("%d %d %d\n", i, right, sum(i, right));
			if(primeValid[sum(i, right)]){
				ans++;
			}
		}
	}
	printf("%d\n", ans);
	
	return 0;
} 
