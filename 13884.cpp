#include <stdio.h>
#include <algorithm>
using namespace std;
void gos(){
	int tk, n;
	int d[1010];
	int check=1;
	scanf("%d %d", &tk, &n);
	for(int i=0;i<n;i++){
		scanf("%d", &d[i]);
	}
	int befmi, movemin=2147483647, cnt=0;
	while(1){
		cnt=0; check=1; int imi;
		for(imi=0;d[imi]>movemin&&imi<n;imi++){
//			printf("%d:%d+ ", imi, d[imi]);
			cnt++;
		}
		befmi=d[imi];
//		printf("f: ");
		for(int i=imi+1;i<n;i++){
			if(d[i]>movemin) {
				cnt++;
//				printf("%d:%d- ", i, d[i]);
			}
			else if(d[i]<befmi){
				int temi=2147483647;
				for(int j=i-1;j>=0;j--){
					if(d[i]>=d[j]) break;
					if(d[j]>movemin){
						continue;
					}
					if(d[i]<d[j]){
						if(d[j]<temi) temi=d[j];
						cnt++;
//						printf("%d:%d ", j, d[j]);
					}
				}
				
				befmi=d[i];
				if(movemin>temi){
					movemin=temi;
					check=0;
				}
			}
			else{
				befmi=d[i];
			}
		}
//		printf("%d \n", movemin);
		
		if(check) break;
	}
//	if(d[n-1].second==n-1) cnt++;
	printf("%d %d\n", tk, cnt);
}

int main(){
	int k;scanf("%d", &k);for(int i=0;i<k;i++) gos();
	
	return 0;
}
