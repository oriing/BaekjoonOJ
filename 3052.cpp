#include <stdio.h>

int main(){
	int cnt[42]={};
	int a[10], imsi=0;
	
	for(int i=0;i<10;i++){
		scanf("%d", &a[i]);
		cnt[a[i]%42]++;
	}
	
	for(int i=0;i<42;i++){
		if(cnt[i]) imsi++;
	}
	printf("%d", imsi);
	
	
	return 0;
}
