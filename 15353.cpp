#include <stdio.h>
#include <string.h>

int main(){
	char a[10100]={}, b[10100]={};
	scanf("%s %s", a, b);
	int an = strlen(a), bn = strlen(b), pt=0;
	char ans[10100]={};

	for(int i=0;i<an;i++) a[i]-='0';
	for(int i=0;i<bn;i++) b[i]-='0';
	
	int mx=(an>bn?an:bn);
	
	for(int i=mx;i>0;i--){
		if(an-mx+i >= 0) ans[i] += a[an-mx+i-1];
		if(bn-mx+i >= 0) ans[i] += b[bn-mx+i-1];
		if(ans[i]>9){
			ans[i]-=10;
			ans[i-1]+=1;
		}
	}
	
	while((*(ans+pt))==0 && pt<mx) pt++;
	char* ansptr = ans + pt;
	mx -= pt;

	for(int i=0;i<=mx;i++) ansptr[i]+='0';
	printf("%s", ansptr);
	return 0;
} 
