#include <stdio.h>

const int mo[4][2]={
	{	0	,	1	},
	{	1	,	0	},
	{	0	,	-1	},
	{	-1	,	0	},
};

void gos(){
	char	order[510];
	int		py=0, px=0, my=0, mx=0;
	int 	pox = 0, poy = 0;
	int 	arrow = 0;
	
	scanf("%s", order);
	
	for(int i=0;order[i];i++){
		if(order[i] == 'F'){
			pox += mo[arrow][0];
			poy += mo[arrow][1];
			
			if(pox > px) 		px = pox;
			else if(pox < mx) 	mx = pox;
			if(poy > py) 		py = poy;
			else if(poy < my) 	my = poy; 
		}
		
		else if(order[i] == 'B'){
			pox -= mo[arrow][0];
			poy -= mo[arrow][1];
			
			if(pox > px) 		px = pox;
			else if(pox < mx) 	mx = pox;
			if(poy > py) 		py = poy;
			else if(poy < my) 	my = poy; 
		}
		
		else if(order[i] == 'L'){
			arrow--;
			if(arrow<0) arrow = 3;
		}
		
		else if(order[i] == 'R'){
			arrow++;
			if(arrow>3) arrow = 0;
		}
	}
	
	printf("%d\n", (px-mx)*(py-my));
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) gos();
	
	return 0;
}
