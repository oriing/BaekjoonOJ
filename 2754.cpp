#include <stdio.h>

int main(){
	char s[3];
	double ans;
	scanf("%s", s);
	switch(s[0]){
		case 'A':
			ans=4.0;
			break;
		case 'B':
			ans=3.0;
			break;
		case 'C':
			ans=2.0;
			break;
		case 'D':
			ans=1.0;
			break;
		case 'F':
			ans=0.0;
			break;
	}
	switch(s[1]){
		case '+':
			ans+=0.3;
			break;
		case '-':
			ans-=0.3;
			break;
	}
	printf("%.1lf", ans);
	
	return 0;
}
