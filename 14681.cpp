main(){
    int x, y, k;
    scanf("%d", &x);
    scanf("%d", &y);
    k=(x>0&&y>0)?1:k;
    k=(x>0&&y<0)?4:k;
    k=(x<0&&y>0)?2:k;
    k=(x<0&&y<0)?3:k;
    printf("%d", k);
}
