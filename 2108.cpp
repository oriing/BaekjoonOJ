#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

int lot(int a[500001], int n){	
	int len=0, m=-2147483647, m2=-2147483647;
	int temp[8010]={};
	int *cnt=temp+4003;
	
	
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	
	for(int i=4000;i>=-4000;i--){
		if(len==cnt[i]){
			m2=m;
			m=i;
		} else if(len<cnt[i]){
			len=cnt[i];
			m2=m=i;
		}
	}

	return m2;
}

int main(){
	int n, a[500001];
	long long int sum=0;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", a+i);
		sum+=a[i];
	}
	
	sort(a, a+n);
	
	printf("%d\n", (int)round((double)sum/n));
	printf("%d\n", a[n/2]);
	printf("%d\n", lot(a, n));
	printf("%d\n", a[n-1]-a[0]);
	return 0;
}
