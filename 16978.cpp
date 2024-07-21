#include <bits/stdc++.h>

using namespace std;

const int ST_MAX = 1<<20;

class SegTree{
	int start;
	long long int arr[ST_MAX];

public:
	SegTree(){
		fill(arr, arr+ST_MAX, 0);
		start = ST_MAX/2;
	}
	
	void update(int n, long long int k){
		k -= get(n);
		n += start;
		while(n>1){
			arr[n] += k;
			n /= 2;
		}
	}
	long long int get(int n){
		return arr[n+start];
	}
	
	long long int sum(int s, int e){
		return sum(s, e, 1, 0, start);
	}
	long long int sum(int s, int e, int node, int ns, int ne){
		if(ne <= s || e <= ns) return 0;
		if(s <= ns && ne <= e) return arr[node];
		int mid = (ns+ne) / 2;
		return sum(s, e, node*2, ns, mid) + sum(s, e, node*2+1, mid, ne);
	}
}; 
SegTree st;

int cnt=0;
struct PrintQuery{
	int seqtime;
	int target;
	int start;
	int end;
	PrintQuery(int t, int s, int e, int cnts){
		target = t;
		start = s;
		end = e;
		seqtime = cnts;
	}
	bool operator<(const PrintQuery &other) const{
		return target > other.target;
	}
};

struct EditQuery{
	int target;
	int value;
	
	EditQuery(int tar, int val){
		target = tar;
		value = val;
	}
};

priority_queue<PrintQuery> pq;
vector<EditQuery> eq;
vector<long long int> ans;


int main(){
	int n, t;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d", &t);
		st.update(i, t);
	}
	int a, b, c, d, q;
	scanf("%d", &q);
	for(int i=1;i<=q;i++){
		scanf("%d", &a);
		if(a==1){
			scanf("%d %d", &b, &c);
			eq.push_back(EditQuery(b, c));
		}
		else{
			scanf("%d %d %d", &b, &c, &d);
			pq.push(PrintQuery(b, c, d, cnt++));
		}
	}
	ans.resize(cnt);
	
	for(int i=0;i<eq.size();i++){
		while(true){
			if(pq.empty() || pq.top().target > i){
				break;
			}
			ans[pq.top().seqtime] = st.sum(pq.top().start, pq.top().end+1);
			pq.pop();
		}
		
		st.update(eq[i].target, eq[i].value);
		
	}
	while(!pq.empty()){
		ans[pq.top().seqtime] = st.sum(pq.top().start, pq.top().end+1);
		pq.pop();
	}
	
	for(int i=0;i<ans.size();i++){
		printf("%lld\n", ans[i]);
	}
	
	return 0;
}
