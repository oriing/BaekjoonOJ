#include <stdio.h>
#include <vector>
using namespace std;
int main(){
	int n, k;
	vector<int> a, b;
	scanf("%d %d", &n, &k);
	if(n==1){
		printf("<1>");
		return 0;
	}
	for(int i=1;i<=n;i++){
		a.push_back(i);
	}
	int nowp=k-1;
	while(a.size()>=1){
		int imn=a.size();
		nowp=nowp%a.size();
		for(int i=nowp;i<imn-1;i++){
			int temp=a[i];
			a[i]=a[i+1];a[i+1]=temp;
		}
		nowp+=k-1;
		b.push_back(a[a.size()-1]);
		a.pop_back();
	}
	
	int imbn=b.size();
	printf("<%d", b[0]);
	for(int i=1;i<imbn;i++){
		printf(", %d", b[i]);
	}
	printf(">");
	
	return 0;
}
