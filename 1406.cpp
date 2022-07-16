#include <stdio.h>
#include <list>
#include <string.h>

using namespace std;

int main(){
	list<char> s;
	char tmp[600010];
	scanf("%s", tmp);
	int n=strlen(tmp);
	for(int i=0;i<n;i++){
		s.push_back(tmp[i]);
	}
	
	scanf("%d", &n);
	
	list<char>::iterator c = s.end();
	for(int i=0;i<n;i++){
		char im[3];
		scanf("%s", im);
		switch(im[0]){
			case 'L':
				if(c!=s.begin()) c--;
				break;
			case 'D':
				if(c!=s.end()) c++;
				break;
			case 'B':
				if(c!=s.begin()){
					c--;
					c=s.erase(c);
				}
				break;
				
			case 'P':
				char x[3];
				scanf("%s", x);
				
				c=s.insert(c, x[0]);
				c++;
				break;
		}
	}
	for(list<char>::iterator p=s.begin(); p!=s.end(); p++) printf("%c", *p);
	
	return 0;
}
