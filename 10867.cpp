#include <stdio.h>
#include <algorithm>

int main(){
	int a[100100], n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", a+i);
	}
	std::sort(a, a+n);
	
	printf("%d ", a[0]);
	for(int i=1;i<n;i++){
		if(a[i-1]!=a[i]) printf("%d ", a[i]);
	}
}
