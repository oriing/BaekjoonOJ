#include <stdio.h>
#include <vector>

using namespace std;

struct data{
	int n;
	char s[10000];
};

int n, t;
char dp[5]="DSLR";

void d(){
	n*=2;
	n%=10000;
}

void s(){
	n--;
	if(n==-1) n=9999;
}

void l(){
	int t=0;
	t+=n/1000;
	t+=(n%10)*10;
	t+=((n/100)%10)*1000;
	t+=((n/10)%10)*100;
	n=t;
}

void r(){
	int t=0;
	t+=(n/1000)*100;
	t+=n%10*1000;
	t+=n/100*10;
	t+=n/10%10;
	n=t;
}

void gos(){
	vector<data> v;
	scanf("%d %d", &n, &t);
	
	data temp[4]={};
	
}

int main(){
	int z;
	scanf("%d", &z);
	for(int i=0;i<z;i++) gos();
	return 0;
}
