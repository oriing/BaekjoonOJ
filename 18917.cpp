#include <stdio.h>

int main(){
	long long int n, x, s=0, k=0;
	scanf("%lld", &n);
	while(n--){
		scanf("%lld", &x);
		switch(x){
			case 1:
				scanf("%lld", &x);
				s += x;
				k ^= x;
				break;
			case 2:
				scanf("%lld", &x);
				s -= x;
				k ^= x;
				break;
			case 3:
				printf("%lld\n", s);
				break;
			case 4:
				printf("%lld\n", k);
		}
	}
	
	return 0;
}
