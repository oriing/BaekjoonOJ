#include <stdio.h>
#define all(a, b) ((a) && (b))
#define line(a, b, c, d) (a<=b && b<=c && c<=d)

int n;
bool check = true;
int a[24]={};
int b[24]={};
int cnt = 0;
int l1, r1, l2, r2;

int main(){
	scanf("%d", &n);
	for(int i=0;i<n*2;i++){
		scanf("%d", a+i);
	}
	for(int i=0;i<n*2;i++){
		scanf("%d", b+i);
	}
	
	for(int i=0;i<n*2;i+=2){
		l1 = a[i]; r1 = a[i+1];
		l2 = b[i]; r2 = b[i+1];
		
		if(r2 == l1) { continue; }
		if(r1 == l2) { continue; }
		if(line(l2, l1, r1, r2)) { cnt++; continue; }
		if(line(l1, l2, r2, r1)) { cnt++; continue; }
		if(line(l2, l1, r2, r1)) { cnt++; continue; }
		if(line(l1, l2, r1, r2)) { cnt++; continue; }
		check = false;
	}
	printf("%d", check?cnt:-1);
	
	return 0;
}
