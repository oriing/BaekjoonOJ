#include <stdio.h>

struct antype{
	int a;
	int b;
	int c;
};
int n, a[3000][3000];

antype find(int xs, int xe, int ys, int ye){
	antype ret;
	ret.a=ret.b=ret.c=0;
	int check=a[ys][xs];
//	printf("(%d~%d) (%d~%d)\n", xs, xe, ys, ye);
	for(int i=ys;i<=ye;i++){
		for(int j=xs;j<=xe;j++){
			if(a[ys][xs]!=a[i][j]){
				check=10;
				break;
			}
		}
	}
	
	if(check==10){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				antype imsi;
				imsi=find(xs+(xe-xs+1)/3*i, xe-(xe-xs+1)/3*(2-i), ys+(ye-ys+1)/3*j, ye-(ye-ys+1)/3*(2-j));
				ret.a+=imsi.a;
				ret.b+=imsi.b;
				ret.c+=imsi.c;
			}
		}
	}
	else switch(check){
		case -1:
			ret.a++;
			break;
		case 0:
			ret.b++;
			break;
		case 1:
			ret.c++;
			break;
	}
//	printf("%d %d %d\n", ret.a, ret.b, ret.c);
	return ret;
}

int main(){
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	antype ans=find(1, n, 1, n);
	
	printf("%d\n%d\n%d", ans.a, ans.b, ans.c);
	
	return 0;
}
