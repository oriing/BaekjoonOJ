#include <stdio.h>

char d[130][130]={};
int n;
char s[100000]={};
int pos=0;

void plu(char a){
	if(a==0) return;
	else {
		s[pos++]=a;
	}
}

char find(int xs, int xe, int ys, int ye){
	int check=d[ys][xs];
//	printf("%d %d %d %d %d\n", xs, xe, ys, ye, check);
	for(int i=ys; i<=ye; i++){
		for(int j=xs; j<=xe; j++){
			if(d[i][j]!=check){
				check=-1;
				break;
			}
		}
	}
	if(check==0){
		return '0';
	}
	if(check==1){
		return '1';
	}
	else{
		plu('(');
		plu(find(xs, xs+(xe-xs-1)/2, ys, ys+(ye-ys-1)/2));
		plu(find(xs+(xe-xs-1)/2+1, xe, ys, ys+(ye-ys-1)/2));
		plu(find(xs, xs+(xe-xs-1)/2, ys+(ye-ys-1)/2+1, ye));
		plu(find(xs+(xe-xs-1)/2+1, xe, ys+(ye-ys-1)/2+1, ye));
		plu(')');
		return 0;
	}
}

int main(){
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		scanf("%s", d[i]+1);
		for(int j=1;j<=n;j++) d[i][j]-='0';
	}
	
	plu(find(1, n, 1, n));
	
	printf("%s\n", s);
	return 0;
}
