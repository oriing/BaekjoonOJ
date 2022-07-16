#include <stdio.h>
#include <vector>
using namespace std;
int main(){
	int n;
	vector<int> a;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		a.push_back(i);
	}
	while(a.size()>1){
		int k=a.size();
		for(int i=0;i<k;i+=2) a[i]=0;
		for(int i=1;i<k;i+=2){
			if(a[i]==0) continue;
			for(int j=i;j>0;j--){
				if(a[j-1]==0){
					int temp=a[j];
					a[j]=a[j-1];
					a[j-1]=temp;
				} else {
					break;
				}
			}
		}
		for(int i=k-1;a[i]==0;i--) a.pop_back();
	}
	printf("%d", a[0]);
	
	
	return 0;
}
