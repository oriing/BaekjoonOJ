#include <stdio.h>

int search(int a[], int k, int l){
	int s=1;
	int m;
	while(s<=l){
		m=(s+l)/2;
		if(a[m]==k) {
			return 1;
		} else if(a[m]<k){
			s=m+1;
		} else l=m-1;
	}
	return 0;
}

void sort(int a[], int l, int r){
	int pivot=a[l];
	int p=l+1;
	int q=r;
	
	if(l>=r) return;
	
	while(1){
		while(pivot>a[p] && p<r) p++;
		while(pivot<=a[q] && q>l) q--;
		
		if(p<q){
			int t=a[p];
			a[p]=a[q];
			a[q]=t;
		} else {
			int t=a[l];
			a[l]=a[q];
			a[q]=t;
			break;
		}
	}
	
	sort(a, l, q-1);
	sort(a, q+1, r);
}

int main(){
	int n, m, a[100010], b;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	sort(a, 1, n);
	scanf("%d", &m);
	for(int i=0;i<m;i++){
		scanf("%d", &b);
		printf("%d\n", search(a, b, n));
	}
	
	return 0;
}
