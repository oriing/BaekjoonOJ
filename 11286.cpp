#include <stdio.h>
#define abs(A) ((A)>0?(A):-(A))
#define max(A, B) ((A)>(B))
#define min(A, B) ((A)<(B))
#define absbig(A, B) (abs(A)==abs(B)?max(A, B):max(abs(A), abs(B)))
#define abssma(A, B) (abs(A)==abs(B)?min(A, B):min(abs(A), abs(B)))
int d[100001]={};
int size=0;

void refreshup(int x){
	if(x==1) return;
	if(absbig(d[x/2], d[x])){
		int temp=d[x];d[x]=d[x/2];d[x/2]=temp;
		refreshup(x/2);
	}
}
void refreshdown(int x){
	if(x*2>size) return;
	int i=2*x;
	if(abssma(d[i+1], abs(d[i])) && i<size) i++;
	
	if(absbig(d[x], d[i])){
		int t=d[x];d[x]=d[i];d[i]=t;
		refreshdown(i);
	}
}

void din(int x){
	d[++size]=x;
	refreshup(size);
}
int dout(){
	int ret=d[1];
	if(ret==0) return 0;
	d[1]=d[size];
	d[size]=0;
	size--;
	refreshdown(1);
	return ret;
}

int main(){
	int n, temp;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &temp);
		if(temp==0){
			printf("%d\n", dout());
		}
		else {
			din(temp);
		}
//		printf("d: ");
//		for(int i=1;i<=size;i++) printf("%d ", d[i]);
//		printf("\n");
//		printf("size:%d\n", size);
	}
	
	return 0;
}
