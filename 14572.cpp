#include <bits/stdc++.h>
using namespace std;

struct Student{
	long long int d;
	vector<int> a;
	
	Student(){}
	Student(long long int d, vector<int> a): d(d), a(a) {}
};

vector<Student> v;

bool cmp(const Student &a, const Student &b){
	if(a.d == b.d) return a.a.size() < b.a.size();
	return a.d < b.d;
}

int main(){
	int n, k, m, temp; long long int d;
	scanf("%d %d %lld", &n, &k, &d);
	
	for(int i=0;i<n;i++){
		v.push_back(Student());
		scanf("%d %lld", &m, &v[i].d);
		
		for(int j=0;j<m;j++){
			scanf("%d", &temp);
			v[i].a.push_back(temp);
		}
	}
	
	sort(v.begin(), v.end(), cmp);
	v.push_back(Student());
//	for(int i=0;i<n;i++){
//		printf("\n%d\n", v[i].d);
//		for(int j=0;j<v[i].a.size();j++) printf("%d ", v[i].a[j]);
//	}
	
	int p=0, q=0;
	long long int mx=0, sm;
	int check[40]={};
	
	for(int i=0;i<v[0].a.size();i++){
		check[v[0].a[i]]++;
	}
	while(q < n){
		if(v[q].d - v[p].d <= d){
			sm=0;
			for(int i=1;i<=k;i++){
				if(check[i] > 0 && check[i] < q-p+1){
					sm++;
				}
			}
			
			sm *= q-p+1;
			if(mx < sm) mx=sm;
			
			q++;
			for(int i=0;i<v[q].a.size();i++){
				check[v[q].a[i]]++;
			}
		}
		
		else{
			for(int i=0;i<v[p].a.size();i++){
				check[v[p].a[i]]--;
			}
			p++;
		}
	}
	
	printf("%lld", mx);
	
	return 0;
}
