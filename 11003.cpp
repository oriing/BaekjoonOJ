#include <iostream>
#include <queue>
#include <utility>

using namespace std;

typedef pair<int, int> pii;

pii k;
int d[5000010];

struct cmp {
	bool operator()(pii& a, pii& b){
		return a.first > b.first;
	}
};

priority_queue<pii, vector<pii>, cmp> pq;

int main(){
	int n, L, temp;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	cin >> n >> L;
	for(int i=0;i<n;i++) cin >> d[i];
	
	for(int i=0;i<n;i++){
		pq.push(make_pair(d[i], i));
		
		k = pq.top();
		while(i-L >= k.second){
			pq.pop();
			k = pq.top();
		}
		
		cout << k.first << ' ';
	}
	
	return 0;
}
