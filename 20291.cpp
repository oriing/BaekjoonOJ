#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

struct Data{
	char wh[101];
	int n;
	int v;
	
	Data(char *s, int k){
		n = strlen(s);
		for(int i=0;i<=n;i++) wh[i]=s[i];
		v = k;
	}
	
	bool operator<(Data other){
		for(int i=0; i<n; i++){
			if(other.n <= i) return false;
			if(wh[i] > other.wh[i]) return false;
			if(wh[i] < other.wh[i]) return true;
		}
		return true;
	}
};

int main(){
	int n;
	vector<Data> v;
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		char temp[101], check;
		char *d;
		scanf("%s", temp);
		d = strtok(temp, ".");
		d = strtok(NULL, ".");
		int ln = strlen(d);
		
		check=0;
		for(int i=0; i<v.size(); i++){
			check=0;
			
			for(int j=0; j<ln; j++){
				if(v[i].n		<=	j	){
					check=1; break;
				}
				if(v[i].wh[j]	!=	d[j]){
					check=1; break;
				}
			}
			
			if(!check){
				v[i].v++;
				check=2; break;
			}
		}
		
		if(check!=2){
			v.push_back(Data(d, 1));
		}
	}
	
	sort(v.begin(), v.end());
	
	for(int i=0;i<v.size();i++){
		printf("%s %d\n", v[i].wh, v[i].v);
	}
	
	return 0;
}
