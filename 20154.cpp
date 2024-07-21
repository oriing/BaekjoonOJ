#include <bits/stdc++.h>
using namespace std;

int main(){
	const int data[2][30] = {{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}, {'3', '2', '1', '2', '3', '3', '3', '3', '1', '1', '3', '1', '3', '3', '1', '2', '2', '2', '1', '2', '1', '1', '2', '2', '2', '1'}};
	char d[1000100];
	scanf("%s", d);
	
	int n = strlen(d);
	for(int i=0;i<n;i++){
		d[i] = data[1][d[i]-'A'];
	}
	
	while(n > 1){
		for(int i=0;i<n;i+=2){
			d[i/2] = (d[i]+d[i+1])%10;
		}
		if(n%2) d[n/2]=d[n-1];
		n = n/2 + n%2;
	}
	printf("%s", d[0]%2? "I'm a winner!": "You're the winner?");
	
	return 0;
}
