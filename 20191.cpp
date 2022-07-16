#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> pos[26];
int jp=0;

int main(){
	char t[100001], s[1000001];
	long long int tn, sn;
	scanf("%s %s", s, t);
	tn=strlen(t);
	sn=strlen(s);

	for(int i=0;i<tn;i++) pos[t[i]-'a'].push_back(i);
	
	int check=1;
	int pnt=1;
	int imsi=s[0];
	for(int i=1;i<sn;i++){
		if(imsi!=s[i]){
			imsi=0;
			break;
		}
	}
	if(imsi){
		if(pos[imsi-'a'].size()){
			printf("%d", sn/pos[imsi-'a'].size() + (sn%pos[imsi-'a'].size()?1:0));
		}
		else{
			printf("-1");
		}
	}
	else{
	for(int i=0;i<sn;i++){
		int nss=s[i]-'a';
		int po;
		int siz=pos[nss].size();
		if(siz==0){
			check=0;
			break;
		}
		
		int stpos=-1;
		int m;
		int l=0, r=siz-1;
		while(l<=r){
			m=(l+r)/2;
			if(pos[nss][m]==jp){
				stpos=0; break;
			}
			else if(pos[nss][m]>jp&&(m<=0||pos[nss][m-1]<jp)){
				stpos=0; break;
			}
			else if(pos[nss][m]<jp){
				l=m+1;
			}
			else r=m-1;
		}
		
		if(stpos!=-1) po = pos[nss][m];
		else po = pos[nss][0];
//		printf("%d\n", po);
		if(jp>po) pnt++;
		jp=po+1;
		if(jp>=tn) { jp%=tn; pnt++; }
	}
	if(check){
		if(jp==0) check=pnt-1;
		else check=pnt;
	}
	else check=-1;
	printf("%d", check);
	}
	return 0;
}
