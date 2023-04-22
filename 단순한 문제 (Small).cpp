#include <stdio.h>

void gos(){
	int a, b, c, ab, ans=0;
	scanf("%d %d %d", &a, &b, &c);
	
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			ab=i%j;
			for(int k=1;k<=c;k++){
				if(ab==j%k){
					if(ab==k%i){
						ans++;
					}
				}
			}
		}
	}
	printf("%d\n", ans);
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++) gos();
}
