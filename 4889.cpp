#include <stdio.h>

int time = 0;

int gos(){
	char d[2010];
	time++;
	scanf("%s", d);
	if(d[0] == '-') return 0;
	int ans = 0, checker = 0;
	
	for(int i=0;d[i];i++){
		if(d[i] == '{'){
			checker++;
		}
		else if(d[i] == '}'){
			if(checker <= 0){
				checker++;
				ans++;
			}
			else{
				checker--;
			}
		}
	}
	ans += checker/2;
	printf("%d. %d\n", time, ans);
	
	
	return 1;
}

int main(){
	while(gos());
	
	return 0;
}
