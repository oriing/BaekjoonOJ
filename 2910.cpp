#include <stdio.h>
#include <algorithm>

using namespace std;
typedef pair<int,int> pii;

bool comp(pii a, pii b){
	return a.first>b.first;
}

int main(){
	pii d[1010]={};
	int im[1010], n, c, k=0;
	scanf("%d %d", &n, &c);
	for(int i=0;i<n;i++){
		scanf("%d", im+i);
	}
	for(int i=0;i<n;i++){
		int cha=1;
		for(int j=0;j<k;j++){
			if(im[i]==d[j].second){
				d[j].first++;
				cha=0;
				break;
			}
		}
		if(cha){
			d[k].first=1;
			d[k].second=im[i];
			k++;
		}
	}
	stable_sort(d, d+k, comp);
//	printf("%d", d[0].second);
	for(int i=0;i<k;i++){
		for(int j=0;j<d[i].first;j++){
			printf("%d ", d[i].second);
		}
	}
	
	return 0;
}
