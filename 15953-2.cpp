#include <stdio.h>

using namespace std;

int va[110]={}, vb[65]={};

void gos(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", (va[a]+vb[b])*10000);
}

void vaset(){
	int i=1;
	for(;i<=1;i++) va[i] = 500;
	for(;i<=3;i++) va[i] = 300;
	for(;i<=6;i++) va[i] = 200;
	for(;i<=10;i++) va[i] = 50;
	for(;i<=15;i++) va[i] = 30;
	for(;i<=21;i++) va[i] = 10;
}
void vbset(){
	int i=1;
	for(;i<=1;i++) vb[i] = 512;
	for(;i<=3;i++) vb[i] = 256;
	for(;i<=7;i++) vb[i] = 128;
	for(;i<=15;i++) vb[i] = 64;
	for(;i<=31;i++) vb[i] = 32;
}

int main(){
	int n;
	scanf("%d", &n);
	vaset(); vbset();
	
	for(int i=0;i<n;i++) gos();
	
	return 0;
}
