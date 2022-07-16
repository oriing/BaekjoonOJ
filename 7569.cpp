#include <stdio.h>
#include <queue>

using namespace std;

int n, m, h;
int d[102][102][102]={};
int zecount=0;
int checked[102][102][102]={};

struct xyz{
	int x;
	int y;
	int z;
};

queue<xyz> now;
queue<xyz> nex;


void gos(){
	int changed=0;
	int day=0;
	do{
//		printf("%d\n----------\n\n", zecount);
		changed=0;
		
		while(!now.empty()){
			xyz temp=now.front();
			now.pop();
			int i=temp.x;
			int j=temp.y;
			int k=temp.z;
			xyz imsi;
			
			if(!d[i-1][j][k]){
				d[i-1][j][k]=1;
				imsi.x=i-1;
				imsi.y=j;
				imsi.z=k;
				nex.push(imsi);
				zecount--;
				
			}
			if(!d[i+1][j][k]){
				d[i+1][j][k]=1;
				imsi.x=i+1;
				imsi.y=j;
				imsi.z=k;
				nex.push(imsi);
				zecount--;
			}
			if(!d[i][j-1][k]){
				d[i][j-1][k]=1;
				imsi.x=i;
				imsi.y=j-1;
				imsi.z=k;
				nex.push(imsi);
				zecount--;
			}
			if(!d[i][j+1][k]){
				d[i][j+1][k]=1;
				imsi.x=i;
				imsi.y=j+1;
				imsi.z=k;
				nex.push(imsi);
				zecount--;
			}
			if(!d[i][j][k-1]){
				d[i][j][k-1]=1;
				imsi.x=i;
				imsi.y=j;
				imsi.z=k-1;
				nex.push(imsi);
				zecount--;
			}
			if(!d[i][j][k+1]){
				d[i][j][k+1]=1;
				imsi.x=i;
				imsi.y=j;
				imsi.z=k+1;
				nex.push(imsi);
				zecount--;
			}
		}
		
		day++;
		
		while(!nex.empty()){
			now.push(nex.front());
			nex.pop();
		}
	} while(!now.empty() && zecount!=0);
	
	if(zecount==0){
		printf("%d", day);
	}
	else{
		printf("-1");
	}
}

int main(){
	for(int i=0;i<102;i++) for(int j=0;j<102;j++) for(int k=0;k<102;k++) d[i][j][k]=-1;
	scanf("%d %d %d", &n, &m, &h);
	for(int i=1;i<=h;i++){
		for(int j=1;j<=m;j++){
			for(int k=1;k<=n;k++){
				scanf("%d", &d[i][j][k]);
				if(d[i][j][k]==0) zecount++;
				if(d[i][j][k]==1){
					xyz temp;
					temp.x=i;
					temp.y=j;
					temp.z=k;
					now.push(temp);
				}
			}
		}
	}
	if(zecount==0){
		printf("0");
		return 0;
	}
	else {
		gos();
	}
	
	return 0;
}
