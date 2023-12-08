#include <stdio.h>
int n, m, k;
char d[502][502];
int sample[502][502][55]={};
int ans=0;
char sampleAns[502][502];

void sep(int xs, int xe, int ys, int ye){
	for(int i=xs;i<xe;i++){
		for(int j=ys;j<ye;j++){
			sample[i-xs][j-ys][d[i][j]-'A']++;
		}
	}
}
int main(){
	
	scanf("%d %d %d", &n, &m, &k);
	for(int i=0;i<n;i++){
		scanf("%s", d[i]);
	}
	
	for(int i=0;i<n;i+=k){
		for(int j=0;j<m;j+=k){
			sep(i, i+k, j, j+k);
		}
	}
	
	int size = m/k * n/k;
	
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			int mx=0;
			int mxv=sample[i][j][0];
			for(int c=1;c<26;c++){
				if(mxv < sample[i][j][c]){
					mxv = sample[i][j][c];
					mx = c;
				}
			}
			ans += (size - mxv);
			sampleAns[i][j] = mx+'A';
		}
	}
	
	printf("%d\n", ans);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%c", sampleAns[i%k][j%k]);
		}
		printf("\n");
	}
	
	return 0;
}
