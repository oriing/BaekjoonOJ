#include <stdio.h>
#include <algorithm>
#include <functional>
#include <string.h>

int main(){
	char d[20];
	
	scanf("%s", d);
	int len = strlen(d);
	std::sort(d, d+len, std::greater<char>());
	
	printf("%s", d);
	
	return 0;
}
