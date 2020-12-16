#include <stdio.h>
int a[2][2][2];//w p t
int i, j, k, l;

void point(int ii, int jj, int kk, int ll){
    if(ii==kk&&jj==ll){
        face(2);
        return;
    }
    if(ii==ll&&jj==kk){
        printf("POINT");
        return;
    } else if(ii!=ll&&jj!=kk){
        printf("POINT");
        return;
    } else {
        line(2, 0, 0, 0);
        return;
    }
}
void line(int section, int ii, int jj, int ll){
    switch(section){
    case 1:
        if(jj==ll){
            face(3);
        } else {
            printf("LINE");
        }
        break;

    case 2:
        printf("LINE");
        break;
    }
}
void face(int section){
    printf("FACE");
}

int main(){

    for(i=0;i<2;i++) for(j=0;j<2;j++) for(k=0;k<2;k++){
        scanf("%d", &a[i][k][j]);
    }


    for(i=0;i<2;i++) for(j=0;j<2;j++) for(k=0;k<2;k++) for(l=0;l<2;l++){
            //printf("ff\n");
        if(a[0][0][i]==a[1][0][k]&&a[0][1][j]==a[1][1][l]){
            //printf("fif\n");
            point(i, j, k, l);
            return 0;
        }

    }
    for(i=0;i<2;i++) for(j=0;j<2;j++) for(l=0;l<2;l++){
        //printf("sf\n");
        if(a[0][i][j]==a[1][i][l]){
            //printf("sif\n");
            if(!i){
                if((a[0][1][1]<a[1][1][0]&&a[0][1][1]<a[1][1][1])||(a[0][1][0]>a[1][1][0]&&a[0][1][0]>a[1][1][1])){
                    continue;
                }
                 else if((a[1][1][1]<a[0][1][0]&&a[0][1][1]<a[1][1][1])||(a[1][1][0]>a[0][1][0]&&a[0][1][0]>a[1][1][1])){
                    continue;
                }
            } else {
                if((a[0][0][1]<a[1][0][0]&&a[0][0][1]<a[1][0][1])||(a[0][0][0]>a[1][0][0]&&a[0][0][0]>a[1][0][1])){
                    continue;
                }
                 else if((a[1][0][1]<a[0][0][0]&&a[0][0][1]<a[1][0][1])||(a[1][0][0]>a[0][0][0]&&a[0][0][0]>a[1][0][1])){
                    continue;
                }
            }
            line(1, i, j, l);
                    return 0;
        }
    }
    for(j=0;j<2;j++) for(l=0;l<2;l++){
            //printf("%d %d %d first\n", i, j, l);
        if(a[0][0][0]<=a[1][0][j]&&a[1][0][j]<=a[0][0][1]){
                //printf("%d %d %d %d %d firstif\n", i, j, a[(i+1)%2][0][j], l, &a[(i+1)%2][1][l]);
            if(a[0][1][0]<=a[1][1][l]&&a[1][1][l]<=a[0][1][1]){
                face(1);
                return 0;
            }
            if(a[1][1][0]<=a[0][1][l]&&a[0][1][l]<=a[1][1][1]){
                face(1);
                return 0;
            }
        }
        if(a[1][0][0]<=a[0][0][j]&&a[0][0][j]<=a[1][0][1]){
                //printf("%d %d %d %d %d firstif\n", i, j, a[(i+1)%2][0][j], l, &a[(i+1)%2][1][l]);
            if(a[1][1][0]<=a[0][1][l]&&a[0][1][l]<=a[1][1][1]){
                face(1);
                return 0;
            }
            if(a[0][1][0]<=a[1][1][l]&&a[1][1][l]<=a[0][1][1]){
                face(1);
                return 0;
            }
        }
    }

    printf("NULL");

    return 0;
}

