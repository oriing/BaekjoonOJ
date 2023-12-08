#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int,int> pii;

int N, K;
int energy[500002];
vector<pii> el;
vector<pii> er;

int elm[500002];
int erm[500002];

bool sorting(pii p1, pii p2) {
    return p1.first > p2.first;
}

int abs(int a){
	return a>=0?a:-a;
}

int main()
{
	
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++)
		scanf("%d", &energy[i]);
	int xk=0;
	for (int i = 0; i < N; i++){
		el.push_back(make_pair(energy[i] + xk, i));
		xk+=K;
	}
	xk=0;
	for (int i = 0; i < N; i++){
		er.push_back(make_pair(-energy[N-i-1] + xk, N-i-1));
		xk+=K;
	}
	
	sort(el.begin(), el.end(), sorting);
	sort(er.begin(), er.end(), sorting);
	
	int beft=N;
	for(int i=0;i<N;i++){
		if(el[i].second == N) continue;
		if(el[i].second < beft){
			for(int j=el[i].second;j<beft;j++) 
				elm[j] = el[i].first;
			beft = el[i].second;
		}
	}
	beft=-1;
	for(int i=0;i<N;i++){
		if(er[i].second == 0) continue;
		if(er[i].second > beft){
			for(int j=er[i].second;j>beft;j--) erm[j] = er[i].first;
			beft = er[i].second;
		}
	}
	
	int np, t, max=-2147483648;
	for(int i=0;i<N-1;i++){
		t = el[i].first + erm[i+1];
		if(t>max) max=t;
	}
	printf("%d", max - N*K + K);

	return 0;
}
