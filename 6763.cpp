#include <stdio.h>

int main(){
	int a, b, bu=0;
	scanf("%d %d", &a, &b);
	if(b-a>30){
		bu=500;
	} else if(b-a>20){
		bu=270;
	} else if(b-a>0){
		bu=100;
	} else{
		printf("Congratulations, you are within the speed limit!");
		return 0;
	}
	printf("You are speeding and your fine is $%d.", bu);
}
