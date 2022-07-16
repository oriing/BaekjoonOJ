#include <stdio.h>

int main(){
	int n, n2=0, n5=0;
	
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		int m=i;
		while(m%2==0){
			m/=2;
			n2++;
		}
		while(m%5==0){
			m/=5;
			n5++;
		}
	}
	printf("%d", n2>n5?n5:n2);
	
	return 0;
}
