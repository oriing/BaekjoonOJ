#include <stdio.h>
#include <utility>
#include <algorithm>
using namespace std;

struct people{
	int x;
	int y;
	int s=1;
};

int main(){
	int n;
	people a[51];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &a[i].x, &a[i].y);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].x>a[j].x && a[i].y>a[j].y){
				a[j].s++;
			} else if(a[i].x<a[j].x && a[i].y<a[j].y){
				a[i].s++;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ", a[i].s);
	}
	
	return 0;
}
