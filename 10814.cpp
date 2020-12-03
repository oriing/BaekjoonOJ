#include <stdio.h>

int year[100000], whi[100000];char name[100000][101];

//void sort(int a[], int l, int r){
//	int pb=a[l];
//	int p=l+1;
//	int q=r, t;
//	
//	if(l>=r) return;
//	
//	while(1){
//		while(a[p]<=pb && p<r) p++;
//		while(a[q]>pb && q>l) q--;
//		
//		if(p<q){
//			t=a[p];a[p]=a[q];a[q]=t;
//			t=whi[p];whi[p]=whi[q];whi[q]=t;
//		} else {
//			t=a[l];a[l]=a[q];a[q]=t;
//			t=whi[l];whi[l]=whi[q];whi[q]=t;
//			break;
//		}
//	}
//	
//	sort(a, l, q-1);
//	sort(a, q+1, r);
//}

void sort(int a[], int n){
	
}

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%d %s", &year[i], &name[i]);
		whi[i]=i;
	}
	
	sort(year, 0, n-1);
	
	for(int i=0;i<n;i++){
		printf("%d %s\n", year[i], name[whi[i]]);
	}
	
	return 0;
}
