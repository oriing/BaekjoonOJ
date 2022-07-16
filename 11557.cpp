#include <stdio.h>
#include <utility>
#include <algorithm>
using namespace std;
struct uni{
	int first;
	char second[30];
};
bool sos(uni a, uni b){
	return a.first<b.first;
}
void gos(){
	uni d[101];
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%s %d", d[i].second, &d[i].first);
	}
	sort(d, d+n, sos);
	printf("%s\n", d[n-1].second);
	
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) gos();
	
	return 0;
}
