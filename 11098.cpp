#include <stdio.h>
#include <string.h>
using namespace std;
void tc(){
	char man[21];
	long long int max=-2147483647; int n;
		long long int ti; char tn[21];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%lld %s", &ti, tn);
		if(ti>max){
			max=ti;
			int x=strlen(tn);
			for(int j=0;j<=x;j++) man[j]=tn[j];
		}
	}
	printf("%s\n", man);
	
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) tc();
	return 0;
}
