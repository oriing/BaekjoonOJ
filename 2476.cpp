#include <stdio.h>
#define max(a, b) (a>b?a:b)
int gaesan(){
	int a, b, c, ans;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b&&b==c){
		ans=(10000+a*1000);
	} else if(a==b){
		ans=(1000+a*100);
	} else if(c==b){
		ans=(1000+b*100);
	} else if(a==c){
		ans=(1000+a*100);
	} else ans=(100*(max(a, max(b, c))));
	
	return ans;
}

int main(){
	int n, maxi=0, temp;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		temp=gaesan();
		if(maxi<temp) maxi=temp;
	}
	printf("%d", maxi);
	return 0;
}
