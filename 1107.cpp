#include <stdio.h>
#define abs(x) ((x)>=0?(x):-(x))

int dp[1000010]={};
int n, m, d[11]={}, temp;

int cng(int x, int y){
	if(dp[x]>y){
		return dp[x]=y;
	}
	else return -1;
}

void button(){
	for(int i=0;i<=9;i++){
		if(d[i]) if(!(i==0)) continue;
		for(int ii=0;ii<=9;ii++){
			if(d[ii]) if(!(i==0&&ii==0)) continue;
			for(int iii=0;iii<=9;iii++){
				if(d[iii]) if(!(i==0&&ii==0&&iii==0)) continue;
				for(int iiii=0;iiii<=9;iiii++){
					if(d[iiii]) if(!(i==0&&ii==0&&iii==0&&iiii==0)) continue;
					for(int iiiii=0;iiiii<=9;iiiii++){
						if(d[iiiii]) if(!(i==0&&ii==0&&iii==0&&iiii==0&&iiiii==0)) continue;
						for(int iiiiii=0;iiiiii<=9;iiiiii++){
							if(d[iiiiii]) continue;
							int no=i*100000 + ii*10000 + iii*1000 + iiii*100 + iiiii*10 + iiiiii;
							if(i==0){
								if(ii==0){
									if(iii==0){
										if(iiii==0){
											if(iiiii==0){
												cng(no, 1); continue;
											}
											cng(no, 2); continue;
										}
										cng(no, 3); continue;
									}
									cng(no, 4); continue;
								}
								cng(no, 5); continue;
							}
							cng(no, 6);
						}
					}
				}
			}
		}
	}
}

int main(){
	for(int i=0;i<=1000009;i++) dp[i]=1000000;
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		scanf("%d", &temp);
		d[temp]=1;
	}
	
	dp[100]=0;
	dp[101]=1;	dp[102]=2;	dp[103]=3;
	dp[99]=1;	dp[98]=2;	dp[97]=3;
	
	for(int i=0;i<=1000009;i++){
		cng(i, abs(100-i));
	}
	button();
	for(int i=0;i<=1000009;i++){
		int j=0, check1=1, check2=1;
		
		while(check1||check2){
			j++;
//			printf("%d ", j);
			if(check1&&i-j>=0){
//				printf("a: %d\n", i-j);
				if(cng(i-j, dp[i]+j)==-1 && (i-j<97 || i-j>103)) check1=0;
			} else check1=0;
			if(check2&&i+j<=1000009){
//				printf("b: %d\n", i+j);
				if(cng(i+j, dp[i]+j)==-1 && (i+j<97 || i+j>103)) check2=0;
			} else check2=0;
		}
	}
	
	
	printf("%d", dp[n]);
//	for(int i=0;i<1113;i++) printf("\n%d : %d", i, dp[i]);
	
	return 0;
}
