#include <stdio.h>
	int n;
	char d[1<<26]={0, 'A', };
	int dp[27]={1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
void find1DFS(int x){
	printf("%c", d[x]);
	if(d[x*2]) find1DFS(x*2);
	if(d[x*2+1]) find1DFS(x*2+1);
}

void find1(){
	find1DFS(1);
}

void find2DFS(int x){
	if(d[x*2]) find2DFS(x*2);
	printf("%c", d[x]);
	if(d[x*2+1]) find2DFS(x*2+1);
}
void find2(){
	find2DFS(1);
}


void find3DFS(int x){
	if(d[x*2]) find3DFS(x*2);
	if(d[x*2+1]) find3DFS(x*2+1);
	printf("%c", d[x]);
}
void find3(){
	find3DFS(1);
}


int main(){
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		char a[2], b[2], c[2];
		scanf("%s %s %s", a, b, c);
		int pos=dp[a[0]-'A'];
		if(b[0]!='.'){
			d[pos*2]=b[0];
			dp[b[0]-'A']=pos*2;
		}
		if(c[0]!='.'){
			d[pos*2+1]=c[0];
			dp[c[0]-'A']=pos*2+1;
		}
	}
	
	//1
	find1();
	printf("\n");
	//2
	find2();
	printf("\n");
	//3
	find3();
	
	return 0;
}
