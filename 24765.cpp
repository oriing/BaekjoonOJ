#include <stdio.h>
void swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}
int dicevalue(int a, int b){
	if(a < b) swap(a, b);
	if(a == 2 && b == 1) return 1000;
	if(a == b) return 100+a;
	return a*10+b;
}
int main(){
	int a, b, c, d;
	do{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(!(a||b||c||d)){
			break;
		}
		
		if(dicevalue(a, b) > dicevalue(c, d)) printf("Player 1 wins.\n");
		else if(dicevalue(a, b) < dicevalue(c, d)) printf("Player 2 wins.\n");
		else printf("Tie.\n");
	} while(1);
	
	return 0;
}
