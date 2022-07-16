#include <stdio.h>

int d[100001]={};
int size=0;

void refreshup(int x){
	if(x==1) return;
	if(d[x/2]>d[x]){
		int temp=d[x];d[x]=d[x/2];d[x/2]=temp;
		refreshup(x/2);
	}
}
void refreshdown(int x){
	if(x*2>size) return;
	int i=2*x;
	if(d[i+1]<d[i] && i<size) i++;
	
	if(d[x]>d[i]){
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
//		printf("size:%d\n", size);
	}
	
	return 0;
}
