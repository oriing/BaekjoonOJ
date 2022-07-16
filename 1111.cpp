#include <stdio.h>
#include <vector>
#include <stdlib.h>

#define abs(x) ((x)>=0?(x):-(x))

using namespace std;

struct ty{
	int a;
	int b;
};

int main(){
	vector<ty> d;
	int n;
	int t, tn;
	
	scanf("%d %d", &n, &tn);
	
	if(n==1){
		printf("A");
		exit(0);
	}
	
	for(int i=1;i<n;i++){
		t=tn;
		scanf("%d", &tn);
		if(i==1){
			for(int j=-10000;j<=10000;j++){
				int imb=-t*j+tn;
				ty im;
				im.a=j;
				im.b=imb;
				d.push_back(im);
			}
			continue;
		}
		for (vector<ty>::iterator it = d.begin(); it != d.end(); ){
			if(((*it).a)*t+((*it).b)!=tn){
				it = d.erase(it);
			}
			else{
				it++;
			}
		}
		if(d.size()==0){
			printf("B");
			exit(0);
		}
	}
	
	int siz=d.size();
	int ans=d[0].a*tn+d[0].b;
	for(int i=1;i<siz;i++){
		if(d[i].a*tn+d[i].b!=ans){
			printf("A", ans, d[i].a*tn+d[i].b);
			exit(0);
		}
	}
	printf("%d", ans);
	
	return 0;
}

