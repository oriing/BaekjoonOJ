#include <stdio.h>

long long int d[250010]={};
int main(){
    int n;
    
    scanf("%d", &n);
    for(int i=0;i<n;i++) scanf("%lld", d+i);
    
    int dpoint = 0;
    bool dps   = false;
    for(int i=0;i<n;i++){
        if(d[i] != 0){
            dpoint = i;
            dps    = true;
            break;
        }
    }
    
    long long int ans = 0;
    int nowp; bool check = true;
    for(int i=0;i<n;i++){
        nowp = (dpoint + i) % n;
        
        if(d[nowp]) {
            ans  += d[nowp];
            check = true;
        }
        else if(check){
            ans  += 1;
            check = false;
        }
        else{
            check = true;
        }
    }
    if(dps==false && n % 2 == 1){
    	ans--;
	}
    
    printf("%lld", ans);
    
    return 0;
}
