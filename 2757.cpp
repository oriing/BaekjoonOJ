#include <stdio.h>
#include <string>
#include <iostream>
std::string get(int a){
	std::string temp = "";
	char x[2]={};
	while(a){
		x[0]=('A'+a%26-1);
		temp = x+temp;
		a /= 26;
	}
	return temp;
}	
int main(){
	int a, b; 
	while(1){
		scanf("R%dC%d", &a, &b);
		if(a==0 && b==0) break;
		std::cout << get(a) << b << "\n";
	}
	
	return 0;
}
