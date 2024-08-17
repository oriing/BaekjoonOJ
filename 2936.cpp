#include <stdio.h>
#include <math.h>

void print(int x, int y){
	printf("%d.%02d ", (x+50)/100/100, (x+50)/100%100);
	printf("%d.%02d", (y+50)/100/100, (y+50)/100%100);
}

int main(){
	int a, b;
	int need;
	
	scanf("%d %d", &a, &b);
	if(a==0 && b==0){
		printf("125.00 125.00");
		return 0;
	}
	if(a==0 && b==250){
		printf("125.00 0.00");
		return 0;
	}
	if(a==250 && b==0){
		printf("0.00 125.00");
		return 0;
	}
	if(a==0){
		if(b==125){
			printf("250.00 0.00");
			return 0;
		}
		
		if(b>125){
			need = 250*250*10000/b/2;
			print(need, 0);
		}
		else{
			need = 250*250*10000/(250-b)/2;
			print(need, 2500000-need);
		}
	}
	else if(b==0){
		if(a==125){
			printf("0.00 250.00");
			return 0;
		}
		
		if(a>125){
			need = 250*250*10000/a/2;
			print(0, need);
		}
		else{
			need = 250*250*10000/(250-a)/2;
			print(2500000-need, need);
		}
	}
	else{
		if(a==125 && b==125){
			printf("0.00 0.00");
			return 0;
		}
		if(a>125){
			need = 250*250*10000/a/2;
			print(0, 2500000-need);
		}
		else{
			need = 250*250*10000/b/2;
			print(2500000-need, 0);
		}
	}
	
	return 0;
}
