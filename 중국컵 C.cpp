#include <stdio.h>

int val(const char *d){
	if(d[0]=='A' && d[1]=='+') return 450;
	if(d[0]=='A' && d[1]=='0') return 400;
	if(d[0]=='B' && d[1]=='+') return 350;
	if(d[0]=='B' && d[1]=='0') return 300;
	if(d[0]=='C' && d[1]=='+') return 250;
	if(d[0]=='C' && d[1]=='0') return 200;
	if(d[0]=='D' && d[1]=='+') return 150;
	if(d[0]=='D' && d[1]=='0') return 100;
	if(d[0]=='F') return 0;
}

int main(){
	int n; int tarint, tarbef1, tarbef2;
	const char ds[9][3]={"F", "D0", "D+", "C0", "C+", "B0", "B+", "A0", "A+"};
	scanf("%d %d.%d", &n, &tarbef1, &tarbef2); tarint = tarbef1*100+tarbef2;
	int s=0, ss=0;
	
	for(int i=1;i<n;i++){
		int a; char st[3];
		scanf("%d %s", &a, st);
		s += a*val(st);
		ss += a;
	}
	int nowt;
	scanf("%d", &nowt);
	ss += nowt;
	
	for(int i=0;i<9;i++){
		int ts = s + nowt*val(ds[i]);
//		printf("%s %d\n", ds[i], ts / (ss+nowt));
		if(ts - (ts%ss) > tarint * ss){
			printf("%s", ds[i]);
			return 0;
		}
	}
	printf("impossible");
	return 0;
}
