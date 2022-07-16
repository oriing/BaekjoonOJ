#include <stdio.h>
#include <math.h>
int main(){
	char a[4], b[4];
	int t=-1;
	scanf("%s %s", a, b);
	for(int i=2;i>=0;i--){
		if(a[i]>b[i]){
			t=0;
			break;
		}
		else if(a[i]<b[i]){
			t=1;
			break;
		}
	}
	if(t==0){
		for(int i=2;i>=0;i--){
			printf("%c", a[i]);
		}
	} else {
		for(int i=2;i>=0;i--){
			printf("%c", b[i]);
		}
	}
	
	return 0;
}
