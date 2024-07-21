#include <stdio.h>
#define gul(a, b) (((a)>=0&&(a)<n&&(b)>=0&&(b)<m)?reset((a), (b)):0)
#define gaesu(a, b) (((map[a+1][b]==2?1:0)+(map[a][b+1]==2?1:0)+(map[a-1][b]==2?1:0)+(map[a][b-1]==2?1:0)))
int map[110][110], nexttm[110][110], n, m, turn;
int visited[110][110];

int reset(int x, int y){
    if(map[x][y]||visited[x][y]) return 1;
    visited[x][y]=1;
    map[x][y]=2;
    gul(x+1, y);
    gul(x, y+1);
    gul(x-1, y);
    gul(x, y-1);
    return 1;
}

void visitedreset(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) visited[i][j]=0;
    }
    reset(0, 0);
}

int finding(){
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(map[i][j]==1&&gaesu(i, j)>1){
                cnt++;
                nexttm[i][j]=1;
            }
            else nexttm[i][j]=0;
        }
    }
    if(cnt){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(nexttm[i][j]){
                    map[i][j]=2;
                }
            }
        }
        turn++;
        visitedreset();
        finding();
        return turn;
    } else return turn;
}

int main(){
    scanf("%d %d", &n, &m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d", &map[i][j]);
        }
    }
    visitedreset();
    
    printf("%d", finding());
    
    return 0;
}
/*
8 9
0 0 0 0 0 0 0 0 0
0 0 0 1 1 0 0 0 0
0 0 0 1 1 0 1 1 0
0 0 1 1 1 1 1 1 0
0 0 1 1 1 1 1 0 0
0 0 1 1 0 1 1 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
*/
