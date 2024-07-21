#include <stdio.h>
#include <memory.h>

int d[7][4]={};
int didfight[7][7]={};

int find(int np){
	if(np == 6) return 0;
	
	int mx = 0, pt, res;
	
	if(d[np][0])		pt = 0; 
	else if(d[np][1])	pt = 1;
	else if(d[np][2])	pt = 2;
	else return find(np+1);
	
	for(int i=np+1;i<6;i++){
		if(didfight[i][np]) continue;
		if(d[i][2-pt]){
			d[np][pt]--;
			d[i][2-pt]--;
			
			didfight[i][np] = didfight[np][i] = 1;
			
			if(d[np][0] || d[np][1] || d[np][2]){
				res = find(np) + 1;
			}
			else{
				res = find(np+1) + 1;
			}
			
			d[np][pt]++;
			d[i][2-pt]++;
			
			didfight[i][np] = didfight[np][i] = 0;
			
			if(mx < res) mx=res;
			if(mx == 15) return 15;
		}
	}
	
	return mx;
}

void gos(){
	bool flag = false;
	for(int i=0;i<6;i++){
		for(int j=0;j<3;j++){
			scanf("%d", &d[i][j]);
		}
		if(d[i][0] + d[i][1] + d[i][2] != 5) flag = true;
	}
	if(flag){
		printf("0 ");
		return;
	}
	
	memset(didfight, 0, sizeof(didfight));
	
	if(find(0) == 15) printf("1 ");
	else printf("0 ");
}

int main(){
	for(int i=0;i<4;i++) gos();
	
	return 0;
} 
