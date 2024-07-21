#include <stdio.h>

int main(){
	int n;
	int d[510];
	int ans = 2147473847, temp, delta;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d", d+i);
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			temp = 0;
			delta = (d[j]-d[i]) / (j-i);
			if((d[j]-d[i]) % (j-i) == 0){
				temp = 0;
				for(int k=0;k<n;k++){
					if(k==i || k==j) continue;
					if(d[k] != (d[i] + delta * (k-i))){
						temp++;
					}
				}
				if(temp < ans) ans = temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		temp = 0;
		for(int j=0;j<n;j++){
			if(d[i] == d[j]) continue;
			temp++;
		}
		if(temp < ans) ans = temp;
	}
	printf("%d", ans);
	
	return 0;
}
