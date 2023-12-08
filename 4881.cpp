#include <stdio.h>
#include <map>
#include <iostream>

using namespace std;

int getnum(int n){
	int s=0;
	while(n>0){
		s += (n%10) * (n%10);
		n /= 10;
	}
	return s;
}

const int dat[20]={89, 145, 42, 20, 4, 16, 37, 58, 89, 145, 42, 20, 4, 16, 37, 58};

int gos(int a, int b){
	map<int, int> 	m;
	int 			status = 0;
	
	for(int cnt=1; !status; cnt++){
		if(a == 1){
			m.insert({1, cnt});
			status = 1;
			break;
		}
		
		for(int i=0;i<8;i++){
			if(dat[i] == a){
				for(int j=i;j<i+8;j++){
					m.insert({dat[j], cnt+j-i});
				}
				
				status = 2;
				break;
			}
		}
		
		if(!status){
			m.insert({a, cnt});
			a = getnum(a);
		}
	}
	
	map<int,int>::iterator pnt;
	
	for(int cnt=1; ; cnt++){
		if((pnt = m.find(b)) != m.end()){
			return (pnt->second) + cnt;
		}
		
		if(b == 1){
			if(status == 2){
				return 0;
			} else {
				throw "error in 1";
			}
		}
		
		for(int i=0;i<8;i++){
			if(dat[i] == b){
				if(status == 1){
					return 0;
				} else {
					throw "error in 2";
				}
			}
		}
		
		b = getnum(b);
	}
}

int main(){
	int a, b, t1, t2;
	while(1){
		scanf("%d %d", &a, &b);
		if(a==0 && b==0){
			break;
		}
		printf("%d %d ", a, b);
		t1 = gos(a, b);
		if(t1){
			t2 = gos(b, a);
			if(t2==0) throw "error3";
			printf("%d\n", t1>t2?t2:t1);
		}
		else printf("0\n");
	}
}
