#include <stdio.h>
#define subject(x) ((x[0])=='k' ? 0 : ((x[0]) == 'e' ? 1 : 2))
#define fruit(x) ((x[0])=='a' ? 0 : ((x[0]) == 'p' ? 1 : 2))
#define color(x) ((x[0])=='r' ? 0 : ((x[0]) == 'b' ? 1 : 2))
int		cnt[3][3][3]={};
char 	tmp[4][10];

int ans1();
int ans2(int);
int ans3(int,int);

int ans1(){
	if(tmp[1][0] == '-'){
		int s=0;
		for(int i=0;i<3;i++){
			s += ans2(i);
		}
		return s;
	}
	else return ans2(subject(tmp[1]));
}

int ans2(int p1){
	if(tmp[2][0] == '-'){
		int s=0;
		for(int i=0;i<3;i++){
			s += ans3(p1, i);
		}
		return s;
	}
	else return ans3(p1, fruit(tmp[2]));
}

int ans3(int p1, int p2){
	if(tmp[3][0] == '-'){
		int s=0;
		for(int i=0;i<3;i++){
			s += cnt[p1][p2][i];
		}
		return s;
	}
	else return cnt[p1][p2][color(tmp[3])];
}



int main(){
	int	n, m;
	
	scanf("%d %d", &n, &m);
	
	for(int i=0;i<n;i++){
		scanf("%s %s %s", tmp[1], tmp[2], tmp[3]);
		cnt[subject(tmp[1])][fruit(tmp[2])][color(tmp[3])]++;
	}
	
	for(int i=0;i<m;i++){
		scanf("%s %s %s", tmp[1], tmp[2], tmp[3]);
		printf("%d\n", ans1());
	}
	
	
	return 0;
}
