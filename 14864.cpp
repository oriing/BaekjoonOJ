#include <stdio.h>

int n;
int m;
int xy[1000000][2];
int ans[100000]={0, };
int ans_k[100000]={0, };

int main(void) {
    int i=0;
    int ans_i[100000]={0, };
    int ans_if[100000]={0, };
    scanf("%d %d", &n, &m);
    for(i=0;i<m;i++){
        scanf("%d %d", &xy[i][0], &xy[i][1]);
        ans_i[xy[i][1]-1]++;
        ans_if[xy[i][0]-1]++;
    }
    for(i=1;i<=n;i++){
        int imsi=i-ans_i[i-1]+ans_if[i-1];
        if(ans_k[imsi-1]==0){
            ans_k[imsi-1]=i;
            ans[i-1]=imsi;
        } else {
            printf("-1");
            return 0;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ", ans[i]);
    }
    
    return 0;
}

