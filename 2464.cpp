#include <stdio.h>
#include <algorithm>

using namespace std;

bool comp(int a, int b){
	return a>b;
}

int d[100]={}, k=99;

void bin(long long int n) {
	if (n!=0) {
		d[k--]=n%2;
		bin(n/2);
	}
}

int main(){
	long long int a;
	scanf("%lld", &a);
	bin(a);
	
	int en=0, pd=99+d[99];
	for(int i=98;i>=k;i--){
		if(d[i]==0) pd=i;
		else if(d[i]==1 && pd!=100){
			en=1;
			int t=d[i];d[i]=d[pd];d[pd]=t;
			int td[100]={};
			for(int j=0;j<100;j++){
				td[j]=d[j];
			}
			sort(td+i+1, td+100, comp);
			
			long long int n=0;
			for(int j=0;j<100;j++) {
		        n=(n<<1LL)+td[j];
		    }
			printf("%lld ", n);
			t=d[i];d[i]=d[pd];d[pd]=t;
			break;
		}
	}
	if(!en) printf("0 ");
	
	en=0, pd=100-d[99];
	for(int i=98;i>=0;i--){
		if(d[i]==1) pd=i;
		else if(d[i]==0 && pd!=100){
			en=1;
			int t=d[i];d[i]=d[pd];d[pd]=t;
			int td[100]={};
			for(int j=0;j<100;j++){
				td[j]=d[j];
			}
			sort(td+i+1, td+100);
			
			long long int n=0;
			for(int j=0;j<100;j++) {
		        n=(n<<1LL)+td[j];
		    }
			printf("%lld ", n);
			t=d[i];d[i]=d[pd];d[pd]=t;
			break;
		}
	}
	if(!en) printf("0 ");
}
