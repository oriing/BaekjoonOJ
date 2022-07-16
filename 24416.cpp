#include <stdio.h>

int f[100]={};
int fibonacc(int n) {
    f[1]=f[2]=1;
    for(int i=3;i<=n;i++)
        f[i] = f[i - 1] + f[i - 2];
    return f[n];
}

int main(){
	int n;
	scanf("%d", &n);
	fibonacc(n);
	printf("%d %d", f[n], n-2);
}
