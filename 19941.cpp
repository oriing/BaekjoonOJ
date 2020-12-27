#include <stdio.h>
#define geting(t) (t>0?a[t]:a[0])
int i, j, n, k, ans=0; char a[20030];

int whi(int x){
	int i;
	for(i=x-k;i<=x+k;i++){
		if(geting(i)=='H'){
			return i>0?i:0;
		}
	}
	return -1;
}

int main() {
	scanf("%d %d", &n, &k);
	scanf("%s", a);
	// printf("%s", a);
	for(i=0;i<n;i++){
		// printf("\n%c", a[i]);
		if(a[i]=='P'){
			// printf("a");
			int imsi=whi(i);
			if(imsi!=-1){
				ans++;
				a[imsi]=0;
			}
		}
	}
	printf("%d", ans);
	
	return 0;
}

